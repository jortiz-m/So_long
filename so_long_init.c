/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:41:39 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 10:44:28 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_mlx(t_game *game)
{
	int	win_width;
	int	win_height;

	win_width = game->map_width * TILE_SIZE;
	win_height = game->map_height * TILE_SIZE;
	game->mlx = mlx_init();
	if (!game->mlx)
	{
		free_all(game);
		error_msg("Error: mlx can't initialise");
	}
	game->win = mlx_new_window(game->mlx, win_width, win_height, "so_long");
	if (!game->win)
	{
		free_all(game);
		error_msg("Error: mlx can't create a window");
	}
}

void	hooks_mlx(t_game *game)
{
	mlx_hook(game->win, KeyPress, KeyPressMask, handle_input, game);
	mlx_hook(game->win, DestroyNotify, ButtonPressMask, close_game, game);
	mlx_hook(game->win, Expose, ExposureMask, render_map, game);
}

int	render_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map_copy[y])
	{
		x = 0;
		while (game->map_copy[y][x])
		{
			find_sprite(game, y, x);
			x++;
		}
		y++;
	}
	return (0);
}
