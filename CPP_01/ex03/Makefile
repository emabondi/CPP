NAME = humans_and_weapons
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

re: fclean $(NAME)

fclean: 
		rm -f $(NAME)

.PHONY: re fclean