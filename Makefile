# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 12:18:16 by roberodr          #+#    #+#              #
#    Updated: 2023/02/02 15:17:06 by roberodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_mustlibft.c ft_mustprintf.c 

OBJS = $(SRCS:.c=.o)

FLAGS	+=	-Wall -Werror -Wextra

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling: $<"

all:	$(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(NAMEBONUS): $(OBJS)
	ar -rcs $(NAME) $(OBJS) 


clean:
	rm -f $(OBJS) 

fclean:		clean
	@rm -f $(NAME) 

re:	fclean all

.PHONY:	all clean fclean re bonus