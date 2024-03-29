# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 21:45:29 by abel-haj          #+#    #+#              #
#    Updated: 2020/01/01 18:37:18 by abel-haj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_strlftrim.c ft_strrgtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_putchar.c ft_putstr.c ft_strcountch.c ft_strindof.c ft_strachr.c ft_arrlen.c ft_putnbr.c

BNS_SRC = ft_lstprint_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_putstr.c ft_putchar.c

OBJ = $(SRC:.c=.o)

BNS_OBJ = $(BNS_SRC:.c=.o)

all: $(NAME) bonus

$(NAME):
	@gcc $(CFLAGS) -c $(SRC) && echo "\033[1;33mCompiled object files\033[0m"
	@ar rc $(NAME) $(OBJ) && echo "\033[0;32mCreated/updated library\033[0m"
	@ranlib $(NAME) && echo "\033[1;33mIndexed library\033[0m"

bonus:
	@gcc $(CFLAGS) -c $(BNS_SRC) && echo "\033[1;33mCompiled bonus object files\033[0m"
	@ar rc $(NAME) $(BNS_OBJ) && echo "\033[0;32mCreated/updated library with bonus\033[0m"
	@ranlib $(NAME) && echo "\033[1;33mIndexed library with bonus\033[0m"

clean:
	@rm -rf *.o && echo "\033[1;31mRemoved object files\033[0m"

fclean: clean
	@rm -rf $(NAME) && echo "\033[1;31mRemoved $(NAME)\033[0m"

re: fclean all

.PHONY: bonus clean flclean
