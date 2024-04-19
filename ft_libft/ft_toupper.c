/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:54:18 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/02 15:19:17 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
int main ()
  {
	  char a = 'a';
	  char b = '@';
	  char c = 'A';
	  
	printf ("%c,,,%c,,,%c\n",toupper(a), toupper(b),toupper(c));
	printf ("%c,,,%c,,,%c\n",ft_toupper(a), ft_toupper(b),ft_toupper(c));
	
	return 0;
  }
  */