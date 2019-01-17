/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 19:30:41 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:40:53 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		back[i] = f(s[i]);
		i++;
	}
	back[i] = '\0';
	return (back);
}
