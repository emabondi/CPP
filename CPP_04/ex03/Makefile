NAME = AMateria
SRCS =  main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean