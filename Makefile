NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

FILES = ft_putchar.c \
	    ft_putstr.c \
	    ft_tolower.c \
	    ft_toupper.c \
	    ft_isprint.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_atoi.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strstr.c \
		ft_strcpy.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlen.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_count_wordlen.c \
		ft_count_words.c \
		ft_lstnew.c \
		ft_get_strlen.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstiter.c \
		ft_lstadd.c \
		ft_lstmap.c \
		ft_printcolor.c \
		ft_iswhitespace.c \

OBJECT = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(FILES)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
