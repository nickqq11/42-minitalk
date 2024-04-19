/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:11:46 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/03 16:08:57 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_words(const char *str, char c)
{
	int	parts;
	int	breaker;

	parts = 0;
	breaker = 0;
	while (*str)
	{
		if (*str != c && breaker == 0)
		{
			breaker = 1;
			parts++;
		}
		else if (*str == c)
			breaker = 0;
		str++;
	}
	return (parts);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			index;
	char		**split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*
int main()
{
  char **tabstr;
  tabstr = ft_split("lorem ipsum dolor sit amet", ' ');
  printf("%s \n", tabstr[1]);
}
*/
