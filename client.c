/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:03:54 by nhuang            #+#    #+#             */
/*   Updated: 2024/04/19 20:30:32 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sendit(int pid, char *str, int len)
{
	int	biting;
	int	i;

	i = 0;
	biting = 0;
	while (i < len)
	{
		while (biting < 8)
		{
			if ((str[i] << biting) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			biting++;
			ft_printf("i %d, bit %d\n", i, biting);
		}
		biting = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		sendit(pid, str, ft_strlen(str));
		ft_printf("your length %d", ft_strlen(str));
	}
	else
		ft_printf("wrong format. [PID][words]");
	return (0);
}
