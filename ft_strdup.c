/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:00:04 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/14 18:00:06 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		a;

	a = 0;
	copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (copy != NULL)
	{
		while (s1[a] != '\0')
		{
			copy[a] = s1[a];
			a++;
		}
		copy[a] = '\0';
		return (copy);
	}
	else
		return (0);
}
