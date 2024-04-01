/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:03:54 by nhuang            #+#    #+#             */
/*   Updated: 2024/04/01 19:22:03 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	sendit(int pid, char *str, int len)
{
	static int	biting;
	int			i;

	i = 0;
	while (i <= len)
	{
		while (biting < 7)
		{
			if ((str[i] >> biting) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			biting++;
			usleep(100);
		}
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
	}
	else
		ft_printf("wrong format. [PID][words]");
	return (0);
}
