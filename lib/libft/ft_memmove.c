/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:43:05 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/01 10:23:11 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = -1;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (0);
	if (d > s)
	{
		while (n != 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (++i < n)
			d[i] = s[i];
	}
	return (dst);
}
