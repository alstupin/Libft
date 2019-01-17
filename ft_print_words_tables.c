/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:05:26 by alstupin          #+#    #+#             */
/*   Updated: 2018/09/13 18:05:08 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (tab[a] != 0)
	{
		b = 0;
		while (tab[a][b] != '\0')
		{
			ft_putchar(tab[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
