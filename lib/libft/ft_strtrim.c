/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:27:34 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/24 09:42:07 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;

	start = 0;
	finish = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] != '\0' && (ft_strchr(set, s1[start])) != NULL)
		start++;
	while (start != finish && (ft_strchr(set, s1[finish - 1])) != NULL)
		finish--;
	return (ft_substr(s1, start, finish - start));
}
