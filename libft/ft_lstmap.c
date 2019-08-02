/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:50:07 by moguy             #+#    #+#             */
/*   Updated: 2018/11/24 15:13:48 by moguy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*beglst;
	t_list	*newlst;

	ft_lstadd(&beglst, f(lst));
	lst = lst->next;
	newlst = beglst;
	while (lst != NULL)
	{
		newlst->next = f(lst);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (beglst);
}
