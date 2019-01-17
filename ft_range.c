/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:09:26 by alstupin          #+#    #+#             */
/*   Updated: 2018/12/03 19:09:28 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int a;

	a = 0;
	if (min >= max)
		return (0);
	tab = malloc((max - min + 1) * sizeof(int));
	if (tab != NULL)
	{
		while (min < max)
		{
			tab[a] = min;
			a++;
			min++;
		}
	}
	else
		return (0);
	return (tab);
}
