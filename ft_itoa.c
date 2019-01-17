/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:09:36 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:52:31 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rank(int n)
{
	int len;

	len = 0;
	while (n > 9 || n < -9)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				neg;
	unsigned int	nb;

	neg = 0;
	len = ft_rank(n);
	if (n < 0)
	{
		neg = 1;
		n = -n;
		len++;
	}
	nb = n;
	if (!(str = ft_strnew((size_t)len)))
		return (0);
	while (len > 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb /= 10;
		len--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
