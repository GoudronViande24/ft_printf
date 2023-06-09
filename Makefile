# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 15:30:46 by thfourni          #+#    #+#              #
#    Updated: 2023/05/18 17:46:37 by thfourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME				=	libftprintf.a
CC					=	gcc
CCFLAG			=	-Wall -Wextra -Werror

SOURCES			= ft_printf.c \
							ft_get_args.c \
							ft_put.c

HEADERS			=	-I.
OBJECTS			=	$(SOURCES:.c=.o)

LIBFT_PATH	=	./libft
LIBFT				=	$(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJECTS)
	@echo "\033[0;92m* $(NAME) library file was created *\033[0m"

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJECTS)
	@echo "\033[0;91m* $(NAME) was deleted *\033[0m"

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
