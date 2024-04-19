/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/30 07:24:28 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*newdst;
	unsigned char	*newsrc;

	newdst = (unsigned char *) dst;
	newsrc = (unsigned char *) src;
	count = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (count < n)
	{
		newdst[count] = newsrc[count];
		count++;
	}
	return (dst);
}
