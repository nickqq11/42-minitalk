/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:57:37 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/30 08:00:03 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		count;

	count = ft_strlen(s1) + 1;
	dst = malloc(count);
	if (!dst)
	{
		return (0);
	}
	ft_memcpy(dst, s1, count);
	return (dst);
}
