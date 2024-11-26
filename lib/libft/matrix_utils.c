/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:29:14 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 10:49:49 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**create_matrix(int n)
{
	char	**matrix;

	if (n < 0)
	{
		perror("create_matrix: Parameter must be positive");
		return (NULL);
	}
	matrix = malloc((n + 1) * sizeof(char *));
	if (!matrix)
	{
		perror("create_matrix: Error allocating matrix memory");
		return (NULL);
	}
	ft_memset(matrix, 0, (size_t)((n + 1) * sizeof(char *)));
	return (matrix);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	if (matrix)
	{
		while (matrix[i])
			free(matrix[i++]);
		free(matrix);
	}
}

int	matrixlen(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}
