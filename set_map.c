/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:12:11 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/12 14:12:21 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_map_dimension(t_game *game)
{
	game->map_height = matrixlen(game->map);
	game->map_width = ft_strlen_gnl(game->map[0]);
}

void	set_map(t_game *game, char *map_file)
{
	char        *super_line;
	
	super_line = txt_to_line(map_file);
    game->map = ft_split(super_line, '\n');
    free(super_line);
}
