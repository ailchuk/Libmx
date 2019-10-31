.PHONY:	all clean fclean re

CC 		= clang

FLAGS 	= -Wall -Werror -Wpedantic -Wextra

NAME 	= libmx.a

INC 	= inc/libmx.h

SRCDIR 	= src/

SRC 	= mx_printchar.c mx_printint.c mx_printstr.c

OBJDIR 	= obj/

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
		@echo "\033[45mcreating \033[0m"
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJDIR):
		@mkdir $(OBJDIR)

$(OBJ): $(OBJDIR)%.o : $(SRCDIR)%.c
	@$(CC) $(FLAGS) -I $(INC) -c $< -o $@

clean:
	@echo "\033[31mUEBALI obj \033[0m"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "\033[31mnahooi lib \033[0m"
	@rm -f $(NAME)

re: fclean all