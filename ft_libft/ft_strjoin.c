/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:11:03 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/04 14:17:17 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		is1;
	int		is2;

	is1 = 0;
	is2 = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (0);
	while (s1[is1] != '\0')
	{
		dest[is1] = s1[is1];
		is1++;
	}
	while (s2[is2] != '\0')
	{
		dest[is1] = s2[is2];
		is1++;
		is2++;
	}
	dest[is1] = '\0';
	return (dest);
}
