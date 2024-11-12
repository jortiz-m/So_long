/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:38:56 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/24 12:14:49 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = (malloc(count * size));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < (count * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
