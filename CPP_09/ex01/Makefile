NAME = RPN
SRCS =  main.cpp RPN.cpp
OBJS = main.o RPN.o
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ -c $(CFLAGS) $(SRCS)
	c++ $(OBJS) -o $(NAME)

re: fclean $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

.PHONY: re clean fclean