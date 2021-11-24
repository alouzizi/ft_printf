
NAME = libftprintf.a
INC = ft_printf.h libft/libft.h
SRCS =  ft_putnbr_unsigned.c \
		print_hexa_lower.c \
		print_hexa_uper.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		print_string.c \
		print_decimal.c \
		ft_printf.c \
		libft/ft_itoa.c\
		libft/ft_strdup.c\
		libft/ft_strlen.c
	

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
cc = gcc
RM = rm -f
AR = ar -rcs

all: $(NAME)

$(NAME) : $(OBJS) $(INC)
		$(AR) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)


fclean : clean
		$(RM) $(NAME)

re : fclean all
