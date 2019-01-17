/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:26:07 by alstupin          #+#    #+#             */
/*   Updated: 2018/12/03 15:26:08 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*back;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	if ((back = ft_lstnew(new->content, new->content_size)))
	{
		tmp = back;
		lst = lst->next;
		while (lst != NULL)
		{
			new = f(lst);
			if (!(tmp->next = ft_lstnew(new->content, new->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	else
		return (NULL);
	return (back);
}
