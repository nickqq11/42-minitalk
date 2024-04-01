/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:03:45 by nhuang            #+#    #+#             */
/*   Updated: 2024/04/01 18:34:48 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	bit_handler(int signal)
{
	static int	i;
	static int	bit;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("Server is running now. \n PID is %d. \n", getpid());
	while (1)
	{
		signal(SIGUSR1, bit_handler);
		signal(SIGUSR2, bit_handler);
		pause();
	}
	return (0);
}
