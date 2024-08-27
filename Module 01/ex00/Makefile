NAME	= zombie

CPP 	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iinclude

RM		= rm -rf

SRCS	= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp 

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