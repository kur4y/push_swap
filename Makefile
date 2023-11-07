# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 14:34:38 by tanota            #+#    #+#              #
#    Updated: 2023/08/24 18:11:35 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS				=			lst.c					\
								main_utils.c			\
								main_utils2.c			\
								main.c					\
								op1.c					\
								op2.c					\
								op3.c					\
								sort.c					\
								utils.c

NAME				=			push_swap

CC					=			cc

CFLAGS				=			-Wall -Wextra -Werror

RM					=			rm -rf

OBJS				=			$(SRCS:.c=.o)

all					:			$(NAME)

$(NAME)				:			$(OBJS)
								make -C libft/ && mv libft/libft.a .
								$(CC) -o $(NAME) $(OBJS) libft.a
								@echo "===== push_swap has been created ====="

clean				:
								make clean -C libft/
								$(RM) $(OBJS)
								@echo "===== temporary files has been deleted ====="

fclean				: 			clean
								$(RM) $(NAME) libft.a
								@echo "===== push_swap has been deleted ====="

re					:			fclean all
								@echo "===== push_swap has been deleted and re-created ====="

.PHONY				:			all clean fclean re
								@echo "===== push_swap created, delete and re-created done ====="
