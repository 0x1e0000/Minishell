NAME		=		minishell

LIBFT		=		src/libft/libft.a

SRCS		=		src/*.c

OBJS		=		*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) $(LIBFT) -o $(NAME)

bonus: $(NAME)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

d:	fclean
	gcc -Wall -Wextra -Werror $(SRCS) $(LIBFT) -g
