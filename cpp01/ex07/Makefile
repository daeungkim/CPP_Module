NAME = changer

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Werror -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ -I .

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
