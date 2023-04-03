NAME = PmergeMe
SRCS =  main.cpp PmergeMe.cpp
OBJS = main.o PmergeMe.o
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ -c $(CFLAGS) $(SRCS)
	c++ $(OBJS) -o $(NAME)

re: fclean $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

.PHONY: re clean fclean