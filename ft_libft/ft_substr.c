/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:10:41 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/04 19:13:08 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (len > j)
		len = j;
	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (j > start && len > 0)
	{
		str[i] = s[start + i];
		j--;
		len--;
		i++;
	}
	str[i] = '\0';
	return (str);
}
