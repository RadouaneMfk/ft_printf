CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putnbr.c ft_putnbr_positive.c ft_putstr.c \
	print_p.c print_x.c print_xx.c print_c.c

OBJ = $(SRC:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean