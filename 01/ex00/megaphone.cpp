#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string str;
	while (std::getline(std::cin, str))
	{
		if (str.empty())
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		else
		{
			for (int i = 0; str[i]; i++)
				std::cout << static_cast<char>(std::toupper(str[i]));
			std::cout << "\n";
		}
	}
	return 0;
}
