/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:03:45 by nhuang            #+#    #+#             */
/*   Updated: 2024/05/13 23:22:49 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

unsigned char	putbyte(int arr[])
{
	unsigned char	byte;
	int				i;
	char			c;

	byte = 0;
	i = 0;
	while (i < 8)
	{
		byte |= (arr[i] << (7 - i));
		i++;
	}
	c = (char) byte;
	return (c);
}

void	bit_handler(int sig)
{
	static int	i;
	int			byte[8];

	if (sig == SIGUSR1)
		byte[i] = 1;
	else if (sig == SIGUSR2)
		byte[i] = 0;
	i++;
	if (i == 8)
	{
		ft_printf("%c", putbyte(byte));
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
