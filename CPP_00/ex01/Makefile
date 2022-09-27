NAME: crappy_phonebook
SRCS: crappy_phonebook.cpp PhoneBook.cpp Contact.cpp
FLAGS: -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME):
		c++ $(FLAGS) $(SRCS) -o crappy_phonebook

re: clean all

clean: 
		rm -f crappy_phonebook