/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:14:58 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:35:38 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_tmp(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;

	if (!lst || !f)
		return (NULL);
	a = ft_lstnew(f(lst->content));
	if (!a)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	return (a);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*tmp;

	tmp = ft_tmp(lst, f, del);
	if (!tmp)
		return (NULL);
	curr = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&curr, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&curr, tmp);
	}
	return (curr);
}
