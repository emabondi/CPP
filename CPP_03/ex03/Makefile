NAME = DiamondTrap
SRCS =  ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean