/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:57:12 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:29:19 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	len2;

	a = 0;
	b = 0;
	if (needle[b] == '\0')
		return ((char*)haystack);
	while (haystack[a] != '\0' && len)
	{
		b = 0;
		len2 = len;
		while ((needle[b] == haystack[a + b]) && len2)
		{
			if (needle[b + 1] == '\0')
				return (&((char*)haystack)[a]);
			b++;
			len2--;
		}
		a++;
		len--;
	}
	return (0);
}
