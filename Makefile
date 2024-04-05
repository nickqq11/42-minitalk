# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 20:03:08 by nhuang            #+#    #+#              #
#    Updated: 2024/04/05 17:59:48 by nhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = SERVER
CLIENT = CLIENT	
PRINTF = ft_printf

CC = gcc -Wall -Wextra -Werror -I$(PRINTF)/headers -L$(PRINTF)

all:
	@make -s -C $(PRINTF)
	@$(CC) server.c -o $@
	@$(CC) client.c -o $@
	@echo "ready to talk"

clean:
	@make clea