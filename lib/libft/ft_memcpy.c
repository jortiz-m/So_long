/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:11:30 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/01 10:21:04 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;

	src2 = src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = src2[i];
		i++;
	}
	return (dst);
}
