# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsoltani <zsoltani@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 15:33:38 by zsoltani          #+#    #+#              #
#    Updated: 2023/11/29 22:28:39 by zsoltani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC_D		=	src/
BUILD_D		=	.build/
INCLUDE_D	=	inc/

SRCS = main.c \
		utils.c \
		init.c \

OBJS = $(addprefix $(BUILD_D), $(SRCS:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lpthread

$(BUILD_D)%.o: $(SRC_D)%.c
	@mkdir -p $(BUILD_D)
	$(CC) $(CFLAGS) -I $(INCLUDE_D) -c $< -o $@

clean:
	rm -rf $(BUILD_D)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re







