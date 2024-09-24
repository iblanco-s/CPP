import os
import re
from datetime import datetime

# Configuration
USER = os.getenv('GITHUB_USER', 'iblanco-')
PUSH_DATE = datetime.strptime(os.getenv('PUSH_DATE'), '%Y-%m-%dT%H:%M:%S%z')
FORMATTED_DATE = PUSH_DATE.strftime('%Y/%m/%d %H:%M:%S')

print(f"Debug: USER = {USER}")
print(f"Debug: PUSH_DATE = {PUSH_DATE}")
print(f"Debug: FORMATTED_DATE = {FORMATTED_DATE}")

LENGTH = 80

def generate_header(filename):
    # Define each line of the header with placeholders
    header_lines = [
        "/* ************************************************************************** */",
        "/*                                                                            */",
        "/*                                                        :::      ::::::::   */",
        f"/*   {filename:<51}:+:      :+:    :+:   */",
        "/*                                                    +:+ +:+         +:+     */",
        "/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */",
        "/*                                                +#+#+#+#+#+   +#+           */",
        f"/*   Created: {FORMATTED_DATE} by iblanco-          #+#    #+#             */",
        f"/*   Updated: {FORMATTED_DATE} by iblanco-         ###   ########.fr       */",
        "/*                                                                            */",
        "/* ************************************************************************** */",
    ]
    
    # Ensure each line is exactly LENGTH characters long
    for i in range(len(header_lines)):
        line = header_lines[i]
        if len(line) < LENGTH:
            # Calculate required padding
            padding = LENGTH - len(line)
            # Insert padding before the closing */
            header_lines[i] = line[:-2] + ' ' * padding + '*/'
        elif len(line) > LENGTH:
            # Trim the line if it exceeds LENGTH
            header_lines[i] = line[:LENGTH-2] + '*/'
    
    return header_lines

def process_file(filepath):
    print(f"Debug: Processing file: {filepath}")
    with open(filepath, 'r+', encoding='utf-8') as f:
        content = f.read().splitlines()
        
        # Define default comment symbols
        start, end, fill = '/*', '*/', '*'
        
        # Check if header exists
        if content and content[0].startswith(start):
            print(f"Debug: Header found at the beginning of the file")
            # Update 'Updated' line (assumed to be the 8th line)
            if len(content) >= 9:
                content[8] = f"{start} Updated: {FORMATTED_DATE} by {USER}{' ' * (LENGTH - len(start) - len(end) - len('Updated: ') - len(FORMATTED_DATE) - len(USER) - 4)}{end}"
                f.seek(0)
                f.write('\n'.join(content))
                f.truncate()
                print(f"Debug: Updated header in file")
        else:
            print(f"Debug: Header not found at the beginning of the file")
            # Insert header
            header = generate_header(os.path.basename(filepath))
            f.seek(0)
            f.write('\n'.join(header) + '\n\n' + '\n'.join(content))
            f.truncate()
            print(f"Debug: Inserted header into file")

# Get the list of changed files from the environment variable
changed_files = os.getenv('GITHUB_CHANGED_FILES', '').split()
print(f"Debug: Changed files: {changed_files}")

# Define excluded extensions
excluded_extensions = ['.py', '.yml']

# Process only the changed files excluding .py and .yml
for file in changed_files:
    file_path = os.path.join(os.getenv('GITHUB_WORKSPACE', ''), file)
    print(f"Debug: Processing file: {file_path}")
    if os.path.exists(file_path):
        _, ext = os.path.splitext(file)
        if ext not in excluded_extensions and file.lower() != 'makefile':
            process_file(file_path)
    else:
        print(f"Debug: File not found: {file_path}")

print("Debug: Script execution completed")