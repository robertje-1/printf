#--------------------------------------------------- variables

NAME = libftprintf.a
HEADER = ft_printf.h
CFLAGS = -Wall -Werror -Wextra
CC = gcc
OBJ = $(SRC:.c=.o)

SRC = ft_printf.c			\
      ft_putchar_tl.c		\
      ft_putstr_tl.c		\
      ft_putptr_tl.c		\
      ft_itoa_tl.c			\
      ft_put_cap_x_tl.c		\
      ft_put_low_x_tl.c		\


#---------------------------------------------------- targets

all: $(NAME)
	@echo "ALL"
#  je kan voor echo een @ plaatsen dan laat ie m niet zien?

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ) ${HEADER} 
	$(AR) rcs  $(NAME) $(OBJ) ${HEADER}
	@echo "NAME"

clean:
	$(RM) $(OBJ) 
	@echo "CLEAN"

fclean: clean
	$(RM) $(NAME)
	@echo "FCLEAN"

re: fclean all


.PHONY: all clean fclean bonus re
