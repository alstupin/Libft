/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:42:45 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:41:21 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*back;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(back = ft_strnew(ft_strlen((char*)s))))
		return (0);
	while (s[i])
	{
		back[i] = f(i, s[i]);
		i++;
	}
	back[i] = '\0';
	return (back);
}
