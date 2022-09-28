NAME= bank_account
SRCS= tests.cpp Account.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98


$(NAME):
		c++ $(FLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean
