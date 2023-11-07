# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 14:34:38 by tanota            #+#    #+#              #
#    Updated: 2023/08/24 18:26:28 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS				=			ft_atoi.c					\
								ft_isprint.c				\
								ft_putchar_fd.c				\
								ft_striteri.c				\
								ft_strnstr.c				\
								ft_bzero.c					\
								ft_itoa.c					\
								ft_putendl_fd.c				\
								ft_strjoin.c				\
								ft_strrchr.c				\
								ft_calloc.c					\
								ft_memchr.c					\
								ft_putnbr_fd.c				\
								ft_strlcat.c				\
								ft_strtrim.c				\
								ft_isalnum.c				\
								ft_memcmp.c					\
								ft_putstr_fd.c				\
								ft_strlcpy.c				\
								ft_substr.c					\
								ft_isalpha.c				\
								ft_memcpy.c					\
								ft_split.c					\
								ft_strlen.c					\
								ft_tolower.c				\
								ft_isascii.c				\
								ft_memmove.c				\
								ft_strchr.c					\
								ft_strmapi.c				\
								ft_toupper.c				\
								ft_isdigit.c				\
								ft_memset.c					\
								ft_strdup.c					\
								ft_strncmp.c

SRCS_BONUS			=			ft_lstadd_back.c			\
								ft_lstadd_front.c			\
								ft_lstclear.c				\
								ft_lstdelone.c				\
								ft_lstiter.c				\
								ft_lstlast.c				\
								ft_lstmap.c					\
								ft_lstnew.c					\
								ft_lstsize.c

NAME				=			libft.a

FLAGS				=			-Wall -Wextra -Werror

CC					=			cc

RM					=			rm -rf

AR					=			ar rcs

OBJ					=			$(SRCS:.c=.o)

OBJ_BONUS			=			$(SRCS_BONUS:.c=.o)

all					:			$(NAME)

$(NAME)				:
								$(CC) $(FLAGS) -c libft.h $(SRCS)
								$(AR) $(NAME) $(OBJ)
								@echo "===== libft has been created ====="

bonus				:			
								$(CC) $(FLAGS) -c libft.h $(SRCS_BONUS) $(SRCS)
								$(AR) $(NAME) $(OBJ_BONUS) $(OBJ)
								@echo "===== libft bonus has been created ====="

clean				:
								$(RM) $(OBJ) $(OBJ_BONUS) libft.h.gch
								@echo "===== temporary files had been deleted ====="

fclean				: 			clean
								$(RM) $(NAME)
								@echo "===== libft has been deleted ====="

re					:			fclean all
								@echo "===== libft has been deleted and re-created ====="

.PHONY				:			all clean fclean re bonus
								@echo "===== libft created, delete and re-created done ====="
