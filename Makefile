
NAME = libft.a

SRC = ft_putstr_fd.c ft_atoi.c ft_strcat.c ft_bzero.c ft_strchr.c ft_isalnum.c \
ft_strclr.c ft_isalpha.c ft_strcmp.c ft_isascii.c ft_strcpy.c ft_isdigit.c \
ft_strdel.c ft_isprint.c ft_strdup.c ft_itoa.c ft_strequ.c ft_lstadd.c \
ft_striter.c ft_lstdel.c ft_striteri.c ft_lstdelone.c ft_strjoin.c ft_lstiter.c \
ft_strlcat.c ft_lstmap.c ft_strlen.c ft_lstnew.c ft_strmap.c ft_memalloc.c \
ft_strmapi.c ft_memccpy.c ft_strncat.c ft_memchr.c ft_strncmp.c ft_memcmp.c \
ft_strncpy.c ft_memcpy.c ft_strnequ.c ft_memdel.c ft_strnew.c ft_memmove.c \
ft_strnstr.c ft_memset.c ft_strrchr.c ft_putchar.c ft_strsplit.c ft_putchar_fd.c \
ft_strstr.c ft_putendl.c ft_strsub.c ft_putendl_fd.c ft_strtrim.c ft_putnbr.c \
ft_tolower.c ft_putnbr_fd.c ft_toupper.c ft_putstr.c ft_char.c ft_lines.c \
ft_isupper.c ft_strlowcase.c ft_strupcase.c ft_islower.c ft_isspace.c ft_puttabchar.c

SRCO = ft_putstr_fd.o ft_atoi.o ft_strcat.o ft_bzero.o ft_strchr.o ft_isalnum.o \
ft_strclr.o ft_isalpha.o ft_strcmp.o ft_isascii.o ft_strcpy.o ft_isdigit.o \
ft_strdel.o ft_isprint.o ft_strdup.o ft_itoa.o ft_strequ.o ft_lstadd.o \
ft_striter.o ft_lstdel.o ft_striteri.o ft_lstdelone.o ft_strjoin.o ft_lstiter.o	\
ft_strlcat.o ft_lstmap.o ft_strlen.o ft_lstnew.o ft_strmap.o ft_memalloc.o \
ft_strmapi.o ft_memccpy.o ft_strncat.o ft_memchr.o ft_strncmp.o ft_memcmp.o \
ft_strncpy.o ft_memcpy.o ft_strnequ.o ft_memdel.o ft_strnew.o ft_memmove.o \
ft_strnstr.o ft_memset.o ft_strrchr.o ft_putchar.o ft_strsplit.o ft_putchar_fd.o \
ft_strstr.o ft_putendl.o ft_strsub.o ft_putendl_fd.o ft_strtrim.o ft_putnbr.o \
ft_tolower.o ft_putnbr_fd.o ft_toupper.o ft_putstr.o ft_char.o ft_lines.o \
ft_isupper.o ft_strlowcase.o ft_strupcase.o ft_islower.o ft_isspace.o ft_puttabchar.o

$(NAME): 
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(SRCO)

all:	$(NAME)

clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: fclean clean