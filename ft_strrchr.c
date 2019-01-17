/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:44:09 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/15 12:44:11 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char*)s);
	if ((char)c == '\0')
		return (&((char*)s)[i]);
	while (i-- != 0)
		if ((char)s[i] == (char)c)
			return (&((char*)s)[i]);
	return (0);
}
