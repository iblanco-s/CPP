# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 19:39:45 by iblanco-          #+#    #+#              #
#    Updated: 2024/08/27 19:39:46 by iblanco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon

CPP 	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iinclude

RM		= rm -rf

SRCS	= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

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