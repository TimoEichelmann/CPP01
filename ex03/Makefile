NAME = violence
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all : $(NAME)
$(NAME) : $(SRC)
	c++ -std=c++98 -Wall -Werror -Wextra -g -o violence $(SRC)
fclean:
	-rm violence
re: fclean all