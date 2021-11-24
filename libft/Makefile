
NAME =	libft.a
INC = libft.h 
SRCS =	ft_atoi.c\
		ft_strdup.c\
		ft_strlen.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = @ar -rcs
cc = gcc

all: $(NAME)

$(NAME):$(OBJS) $(INC)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all