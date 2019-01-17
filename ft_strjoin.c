/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:31:01 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:44:39 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*back;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	back = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) +
				ft_strlen((char*)s2) + 1));
	if (back == NULL)
		return (0);
	while (s1[i] != '\0')
		back[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
	{
		back[j] = s2[i];
		i++;
		j++;
	}
	back[j] = '\0';
	return (back);
}
