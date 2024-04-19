/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:02:45 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/01 16:45:58 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && n--)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char)(s1[i])) - ((unsigned char)(s2[i])));
		i++;
	}
	return (0);
}

//while (i < n && s1[i + 1] != '\0' && s2[i + 1] != '\0' && s1[i] == s2[i])
	//	i++;
	//return (((unsigned char)(s1[i])) - ((unsigned char)(s2[i])));