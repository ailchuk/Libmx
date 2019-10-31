.PHONY:	all clean fclean re

CC 		= clang

FLAGS 	= -Wall -Werror -Wpedantic -Wextra

NAME 	= libmx.a

INC 	= inc/libmx.h

SRCDIR 	= src/

SRC 	= mx_file_to_str.c mx_strnew.c

OBJDIR 	= obj/

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
		@echo "\033[32mCreated...\033[0m"
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJDIR):
		@mkdir $(OBJDIR)

$(OBJ): $(OBJDIR)%.o : $(SRCDIR)%.c
	@$(CC) $(FLAGS) -I $(INC) -c $< -o $@

clean:
	@echo "\033[31mRemoved obj \033[0m"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "\033[31mRemoved lib \033[0m"
	@rm -rf $(NAME)

re: fclean all
