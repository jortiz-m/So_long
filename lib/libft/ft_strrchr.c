/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:10:13 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 11:35:49 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	strlenght;

	strlenght = ft_strlen(str);
	while (strlenght >= 0)
	{
		if (str[strlenght] == (char)chr)
			return ((char *)(str + strlenght));
		strlenght --;
	}
	return (NULL);
}
