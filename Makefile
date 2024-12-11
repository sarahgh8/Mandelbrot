.RECIPEPREFIX = ~
CC = cc
CFLAGS = -Wall -Wextra -Werror
AFLAGS = -Lminilibx -lmlx -lX11 -lXext -lm
NAME = fractol
SRC = main.c Mandelbrot.c utils.c str_manip.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME) 

$(NAME): $(OBJ)
~@$(CC) $(CFLAGS) $(OBJ) $(AFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
~@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
~@mkdir -p $(OBJ_DIR)

clean:
~@rm -rf $(OBJ_DIR)

fclean: clean
~@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
