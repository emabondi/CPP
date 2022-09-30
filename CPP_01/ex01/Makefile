NAME = BraiiiiiiinnnzzzZ
CC = c++
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean