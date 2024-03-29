/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:03:45 by nhuang            #+#    #+#             */
/*   Updated: 2024/03/29 16:34:51 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	bit_handler(int bit)
{
	int	i;

	i = 0;


}

int	main(void)
{
	ft_printf("Server is running now. \n PID is %d. \n", getpid());
	while (1)
	{
		signal(SIGUSR1, bit_handler);
		signal(SIGUSR2, bit_handler);
	}
	return (0);
}
