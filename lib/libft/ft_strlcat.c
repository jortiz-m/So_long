/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:50:09 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/01 10:30:19 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= n)
		return (n + lensrc);
	while ((src[i] != '\0') && ((i + lendst) < (n - 1)))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
