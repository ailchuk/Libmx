CC = clang
CFLAGS = -Wall -Wextra -Werror -Wpedantic
AR = ar rc
RANLIB = ranlib

NAME = libmx.a
HEAD = libmx.h
SRC_DIR = src
OBJ_DIR = @mkdir obj
SRCS = $(SRC_DIR) mx_printchar.c

OBJS = $(SRCS:.c = OBJ_DIR:.o)

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)

clean:
		@rm -f $(OBJS)
		@rm -f $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re:		fclean all