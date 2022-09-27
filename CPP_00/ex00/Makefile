NAME: megaphone
SRC: megaphone.cpp
FLAGS: -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
		c++ $(FLAGS) $(SRC) -o $(NAME)

re: clean all

clean: 
		rm -f megaphone
.PHONY: all clean re