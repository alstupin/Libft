/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:05:42 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/14 13:56:29 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	if (dst == (void*)src)
		return (dst);
	while (n > 0)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
		n--;
	}
	return (dst);
}
