/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:13:19 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 12:46:08 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_entities(t_entities *entities, char **lines)
{
	if (entities->player_counter != 1
		|| entities->exit_counter != 1
		|| entities->coin_counter < 1)
	{
		free_matrix(lines);
		error_msg("Error: validate_entities: wrong entities counter");
	}
}

void	validate_edges(char **lines)
{
	if (!all_chars_same(lines[0], WALL)
		|| !all_chars_same(lines[(matrixlen(lines) - 1)], WALL))
	{
		free_matrix(lines);
		error_msg("Error: validate_edges: chr differs from '1'");
	}
}

void	validate_body(char **lines, t_entities *entities)
{
	size_t	len;
	int		i;

	entities->player_counter = 0;
	entities->coin_counter = 0;
	entities->exit_counter = 0;
	len = ft_strlen(lines[0]);
	i = 1;
	while (lines[i])
	{
		count_entities(lines[i], entities);
		if (!validate_walls(lines[i]) || !validate_len(lines[i], len))
		{
			free_matrix(lines);
			error_msg("Error: validate_body: walls or len are incorrect!");
		}
		i++;
	}
	validate_entities(entities, lines);
}

bool	validate_walls(char *lines)
{
	if (lines[0] != WALL || lines[ft_strlen(lines) - 1] != WALL)
		return (false);
	return (true);
}

bool	validate_len(char *str, size_t len)
{
	if (ft_strlen(str) != len)
		return (false);
	return (true);
}
