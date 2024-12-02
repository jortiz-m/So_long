/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:54:04 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/12/02 13:57:53 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_images(t_game *game)
{
	if (game->floor_img.img)
		mlx_destroy_image(game->mlx, game->floor_img.img);
	if (game->wall_img.img)
		mlx_destroy_image(game->mlx, game->wall_img.img);
	if (game->player_front.img)
		mlx_destroy_image(game->mlx, game->player_front.img);
	if (game->player_back.img)
		mlx_destroy_image(game->mlx, game->player_back.img);
	if (game->player_left.img)
		mlx_destroy_image(game->mlx, game->player_left.img);
	if (game->player_right.img)
		mlx_destroy_image(game->mlx, game->player_right.img);
	if (game->coin_img.img)
		mlx_destroy_image(game->mlx, game->coin_img.img);
	if (game->exit_img.img)
		mlx_destroy_image(game->mlx, game->exit_img.img);
	if (game->open_exit_img.img)
		mlx_destroy_image(game->mlx, game->open_exit_img.img);
	if (game->incomplete_img.img)
		mlx_destroy_image(game->mlx, game->incomplete_img.img);
}

void	free_all(t_game *game)
{
	destroy_images(game);
	free_matrix(game->map);
	free_matrix(game->map_copy);
	if (game->mlx)
	{
		mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	}
}
