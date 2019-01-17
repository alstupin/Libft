/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:36:48 by alstupin          #+#    #+#             */
/*   Updated: 2018/09/02 17:38:49 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_counter(char *str)
{
	int max;

	max = 0;
	while (str[max] != '\0')
		max++;
	return (max - 1);
}

char		*ft_strrev(char *str)
{
	int		max;
	int		a;
	char	tmp;

	a = 0;
	max = ft_counter(str);
	while (a <= max)
	{
		tmp = str[a];
		str[a] = str[max];
		str[max] = tmp;
		a++;
		max--;
	}
	return (str);
}
