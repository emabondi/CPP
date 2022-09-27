NAME: megaphone
CC = c++
SRCS: megaphone.cpp
CFLAGS: -Wall -Wextra -Werror -std=c++98


$(NAME): $(SRCS)
		@$(CC) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean: 
		rm -f megaphone

re: clean all

.PHONY: all re clean