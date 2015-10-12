# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rthys <rthys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/20 12:44:48 by rthys             #+#    #+#              #
#    Updated: 2014/11/20 20:44:40 by rthys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC	=	*.c

SRCO =	*.o

all:	$(NAME)

cmpo:
	@gcc -Wall -Wextra -Werror -I ./includes -c $(SRC)

$(NAME) : cmpo
	@ar rc $(NAME) $(SRCO)

clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
