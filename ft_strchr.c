/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:09:21 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/15 12:09:26 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if ((char)c == '\0')
	{
		i = ft_strlen((char*)s);
		return (&((char*)s)[i]);
	}
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			return (&((char*)s)[i]);
		i++;
	}
	return (0);
}
