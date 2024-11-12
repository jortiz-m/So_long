/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:55:21 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/30 09:11:04 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*start;

	if (!lst || !del)
		return ;
	start = *lst;
	while (start)
	{
		temp = start->next;
		del(start->content);
		free(start);
		start = temp;
	}
	*lst = NULL;
}
