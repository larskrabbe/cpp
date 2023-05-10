NAME = let_it_burn

FLAGS = -Werror -Wall -Wextra -std=c++98 

CC = c++

all:*.cpp
	$(CC) $(FLAGS) *.cpp  -o $(NAME)

clean:
	rm -f $(NAME)

run: all
	./$(NAME)

re:clean all	