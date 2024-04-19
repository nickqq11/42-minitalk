/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:32:51 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/29 23:56:59 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	toto;
	void	*dst;

	toto = size * count;
	dst = malloc(toto);
	if (!dst)
		return (NULL);
	ft_bzero(dst, toto);
	return (dst);
}
