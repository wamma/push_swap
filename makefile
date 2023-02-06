# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 15:21:03 by hyungjup          #+#    #+#              #
#    Updated: 2023/02/06 16:57:33 by hyungjup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
LIB_DIR = ./libft
LIBFLAG = -lft -L$(LIB_DIR)

SRCS = main.c\
	   

OBJS = $(SRCS:.c=.o)

HEADER = push_swap.h

all : $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIB_DIR)
	@$(CC) $(CFLAGS) $(LIBFLAG) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created!"

%.o : %.c $(HEADER)
	@${CC} ${CFLAG} -c $< -o $@

clean :
	@$(RM) $(RMFLAG) $(OBJS)
	@make -C $(LIB_DIR) clean
	@rm -f make_mandatory
	@echo "$(YELLOW)object files deleted!"

fclean : clean
	@$(RM) $(NAME)
	@make -C $(LIB_DIR) fclean
	@echo "$(RED)all deleted"

re : fclean all

.PHONY : all clean fclean re

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[0;33m