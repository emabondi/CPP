NAME= crappy_phonebook
SRCS= crappy_phonebook.cpp PhoneBook.cpp Contact.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98


$(NAME):
		c++ $(FLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean