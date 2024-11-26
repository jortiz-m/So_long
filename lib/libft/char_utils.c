/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:28:17 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 12:04:56 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	check_len(char *str, int len)
{
	if (ft_strlen(str) != len)
		return (false);
	return (true);
}

bool	check_chr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	count_char_in_str(char *str, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (check_chr(str, c))
	{
		while (str[i])
		{
			if (str[i] == c)
				res++;
			i++;
		}
	}
	return (res);
}

bool	all_chars_same(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (false);
	while (str[i])
	{
		if (str[i] != c && str[i] != '\n')
			return (false);
		i++;
	}
	return (true);
}
