/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:08:59 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:25:01 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	my_is_char(char c, char s)
{
	if (c == s)
		return (1);
	return (0);
}

char		*ft_strctrim(char const *s, char c)
{
	char	*back;
	int		start;
	int		end;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	if (!(back = ft_strnew(end)))
		return (NULL);
	while (my_is_char(s[start], c) == 1)
		start++;
	while (my_is_char(s[end], c) == 1)
		end--;
	if (end - start < 1)
		return (back);
	if (!(back = ft_strsub(s, start, end - start + 1)))
		return (NULL);
	return (back);
}
