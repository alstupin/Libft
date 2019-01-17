/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:18:14 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:29:37 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char*)malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	ft_memset(new, '\0', size + 1);
	return (new);
}
