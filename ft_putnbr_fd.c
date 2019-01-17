/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:13:16 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:47:18 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	a = n;
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar_fd(a % 10 + 48, fd);
	}
	else
		ft_putchar_fd(a + 48, fd);
}
