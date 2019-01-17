/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:25:39 by alstupin          #+#    #+#             */
/*   Updated: 2018/12/03 15:25:41 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*tmp;

	if (!(*alst) || !(del))
		return ;
	lst = *alst;
	if (del)
	{
		while (lst)
		{
			tmp = lst->next;
			ft_lstdelone(&lst, del);
			lst = tmp;
		}
	}
	*alst = NULL;
}
