# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 20:03:08 by nhuang            #+#    #+#              #
#    Updated: 2024/04/12 17:28:41 by nhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = SERVER
CLIENT = CLIENT	
PRINTF = ft_printf

#CC = gcc -Wall -Wextra -Werror -I$(PRINTF)/headers -L$(PRINTF)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -I$(PRINTF)/headers -L$(PRINTF) -lftprintf

all: $(SERVER) $(CLIENT)

$(SERVER): server.c
	@make -s -C $(PRINTF)
	@$(CC) $(CFLAGS) server.c -o $@ $(LDFLAGS)

$(CLIENT): client.c
	@$(CC) $(CFLAGS) client.c -o $@ $(LDFLAGS)

clean:
	@make clean -s -C $(PRINTF)

fclean: clean
	@make fclean -s -C $(PRINTF)
	@rm -f $(SERVER) $(CLIENT)
	@echo "ALL clean"

re: fclean all

# all:
# 	@make -s -C $(PRINTF)
# 	@$(CC) server.c -o $@
# 	@$(CC) client.c -o $@
# 	@echo "ready to talk"

# clean:
# 	@make clean -s -C $(PRINTF)

# fclean: clean
# 	@make fclean -s -C $(PRINTF)
# 	@rm -f $(SERVER) $(CLIENT)
# 	@echo "ALL clean"

# re: fclean all
