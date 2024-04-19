/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:34 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/04 18:56:13 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = ft_strlen(s);
	while (a <= b)
		if (s[b - a++] == (char)c)
			return (((void *)&((char *)s)[b - --a]));
	return (0);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;
// 	char	*start;

// 	start = (char *)s;
// 	i = ft_strlen(s);
// 	s = (s + i);
// 	while (*s != *start && (char) c != *s)
// 		s--;
// 	if ((char) c == *s)
// 		return ((char *)s);
// 	return (0);
// }
