/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:15:49 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/27 18:19:10 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	srclen;

	count = 0;
	srclen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (count < (dstsize - 1) && src[count] != '\0')
		{
			dst[count] = src[count];
			count++;
		}
	dst[count] = '\0';
	}
	return (srclen);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char dest[20] = "ABCDE";
	char src[20] = "FGHI";
	int n,c;

	printf("dest org %s\n ", dest);
	n = ft_strlcpy(dest, src, 5);
	printf("dest mod %s count n = %d \n ", dest, n);
	return(0);
}
*/
