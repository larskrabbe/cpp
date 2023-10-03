NAME = btc

FLAGS = -Werror -Wall -Wextra -std=c++98

CC = c++

all: *.cpp
	$(CC) $(FLAGS) *.cpp  -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

run: all
	./$(NAME)

re:clean all