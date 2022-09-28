NAME= bank_account
SRCS= tests.cpp Account.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98


$(NAME): $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean
