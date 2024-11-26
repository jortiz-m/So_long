/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:58:23 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 11:21:35 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac == 2)
	{
		map_validation(&game, av[1]);
		init_mlx(&game);
		init_sprite(&game);
		render_map(&game);
		hooks_mlx(&game);
		mlx_loop(game.mlx);
	}
	else
		error_msg("Enter valid argument");
	return (0);
}
