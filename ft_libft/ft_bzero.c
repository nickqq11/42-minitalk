/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:00:39 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/04 18:45:05 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = '\0';
}

/*
#include<stdio.h>

int main(void)
{
	char str[10] = "hello";
	printf("%s 1\n", str);
	ft_bzero(&str, 2);
	printf("%s 2\n", str + 2);
	return(0);
}
*/
