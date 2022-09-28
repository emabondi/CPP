NAME= megaphone
CC = c++
SRCS= megaphone.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98

$(NAME):
		c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean: 
		rm -f megaphone

re: fclean $(NAME)

.PHONY: re fclean