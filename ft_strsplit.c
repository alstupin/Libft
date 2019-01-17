/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:09:17 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:09:19 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		ft_clean(char **tab, int a)
{
	while (a--)
		ft_strdel(&tab[a]);
	ft_memdel((void**)tab);
	return ;
}

static int		ft_words_counter(char const *str, char c)
{
	int a;
	int words;

	a = 0;
	words = 0;
	while (str[a] != '\0')
	{
		if (a == 0 && str[0] != c)
			words++;
		else if (str[a] != c && str[a - 1] == c)
			words++;
		a++;
	}
	return (words);
}

static char		*ft_words_creator(char const *str, int index, char c)
{
	char	*word;
	int		len;
	int		i;
	int		a;

	len = 0;
	a = 0;
	i = index;
	while (str[index] && str[index] != c)
	{
		index++;
		len++;
	}
	if (!(word = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len)
	{
		word[a] = str[i];
		a++;
		i++;
		len--;
	}
	word[a] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		a;
	int		words;
	char	**tab;

	i = 1;
	a = 0;
	if (!s || !c)
		return (0);
	words = ft_words_counter(s, c);
	if (!(tab = (char**)malloc((words + 1) * sizeof(char *))))
		return (0);
	while (s[i])
	{
		if (s[0] != c && i == 1)
			if (!(tab[a++] = ft_words_creator(s, 0, c)))
				ft_clean(tab, a);
		if (s[i] != c && s[i - 1] == c)
			if (!(tab[a++] = ft_words_creator(s, i, c)))
				ft_clean(tab, a);
		i++;
	}
	tab[a] = 0;
	return (tab);
}
