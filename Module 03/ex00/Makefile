# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 16:49:36 by iblanco-          #+#    #+#              #
#    Updated: 2024/09/03 16:49:37 by iblanco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= claptrap

CPP 	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iinclude

RM		= rm -rf

SRCS	= main.cpp ClapTrap.cpp

OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@mkdir -p $(@D)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re