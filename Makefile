NAME		=		minishell

SRCS		=		*.c

OBJS		=		$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(NAME)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
