/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:44:42 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:30:03 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;

	a = 0;
	while ((s1[a] || s2[a]) && n)
	{
		if (s1[a] != s2[a])
			return (((unsigned char*)s1)[a] - ((unsigned char*)s2)[a]);
		a++;
		n--;
	}
	return (0);
}
