/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:05:38 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/30 10:49:48 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelement;

	if (!lst || !f)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newelement = ft_lstnew(NULL);
		if (!newelement)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newelement -> content = f(lst -> content);
		ft_lstadd_back(&newlist, newelement);
		lst = lst->next;
	}
	return (newlist);
}
