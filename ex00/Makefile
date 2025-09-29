SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++ -Wall -Werror -Wextra -std=c++98
NAME = claptrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
