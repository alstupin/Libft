/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:12:48 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:12:52 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int a;

	a = 0;
	if (!s)
		return ;
	while (s[a] != '\0')
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
	ft_putchar_fd('\n', fd);
}
