/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:25:36 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/12 14:08:30 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "lib/minilibx-linux/mlx.h"
# include "lib/libft/libft.h"

#define TILE_SIZE 32

// Entities definition
# define FLOOR '0'
# define WALL '1'
# define PLAYER 'P'
# define COIN 'C'
# define EXIT 'E'
# define VISITED 'V' // Added VISITED definition


// Entities struct (Player, Collectibles and Exit)
typedef struct s_entities
{
	int	player_counter;
	int	exit_counter;
	int	coin_counter; // Changed from collectible_counter to coin_counter
}	t_entities;

// Map coords (x, y)
typedef	struct s_coords
{
	int	x;
	int	y;
}	t_coords;

typedef struct s_game
{
    void        *mlx;           	// Conexión con MiniLibX
    void        *win;           	// Ventana del juego
    void        *floor_img;         // Imagen del suelo
    void        *wall_img;      	// Imagen de la pared
    void        *player_img;    	// Imagen del jugador
    void        *coin_img;      	// Imagen de la moneda
    void        *exit_img;      	// Imagen de la salida
    char        **map;          	// Mapa del juego
    int         map_width;      	// Ancho del mapa
    int         map_height;     	// Alto del mapa
    t_coords    player_pos;     	// Posición del jugador
    t_entities  entities;       	// Entidades del juego
    int         coins_collected;	// Monedas recogidas
} t_game;

// Map_validation.c
void		map_validation(t_game *game, char *map);
char		*txt_to_line(char *txt);
char		*process_txt(int fd);
void	    validate_extension(char *file);

// set_map.c
void	    set_map_dimension(t_game *game);
void        set_map(t_game *game, char *file);

// Validations.c
void		validate_edges(char **lines);
void		validate_body(char **lines, t_entities *entities);
void		validate_entities(t_entities *entities, char **lines);
bool		validate_walls(char *lines);
bool		validate_len(char *str, int len);

// Validations_utils.c
void		count_entities(char *line, t_entities *entities);
char		*gnl_cat(char *s1, char *s2);
void		reachable_entities(char **lines, t_entities entities, t_coords p_coords);
void		flood_fill(int x, int y, int *coins, char **map, bool *exit);
void		find_player(char **map, t_coords *player_cords);

// so_long_init.c
void        init_mlx(t_game *game);
void        render_map(t_game *game);

#endif