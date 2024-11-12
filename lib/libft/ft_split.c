/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:28:19 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/01 10:41:51 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, int c);
static int	ft_countletter(char const *s, char c);
static void	*ft_free(char **matrix, int words);
static char	**ft_fillmatrix(char const *s, int words, char c, char **matrix);

static int	ft_countwords(const char *s, int c)
{
	int	i;
	int	clen;

	i = 0;
	clen = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	if (s[0] != c)
		clen++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			clen++;
		i++;
	}
	return (clen);
}

static int	ft_countletter(char const *s, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

static void	*ft_free(char **matrix, int clen)
{
	int	i;

	i = 0;
	while (i < clen)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

static char	**ft_fillmatrix(char const *s, int clen, char c, char **matrix)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < clen)
	{
		while (*s == c)
			s++;
		len = ft_countletter(s, c);
		matrix[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (matrix[i] == NULL)
			return (ft_free(matrix, i));
		j = 0;
		while (j < len)
			matrix[i][j++] = *s++;
		matrix[i][j] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		clen;

	if (!s)
		return (NULL);
	clen = ft_countwords(s, c);
	matrix = (char **)malloc(sizeof(char *) * (clen + 1));
	if (matrix == NULL)
		return (NULL);
	matrix = ft_fillmatrix(s, clen, c, matrix);
	return (matrix);
}
