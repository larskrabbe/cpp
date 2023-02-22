NAME = phonebook

FLAGS = -Werror -Wall -Wextra -std=c++98

CC = clang++

all:
	$(CC) $(FLAGS) *.cpp  -o $(NAME)

clean:
	rm -f $(NAME)

run: all
	./$(phonebook)

re:clean all	