/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:27:22 by athirion          #+#    #+#             */
/*   Updated: 2022/01/18 14:42:17 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_deal_key(int key, t_data *data)
{
	if (key == ESCAPE)
		ft_close(data);
	if (key == S || key == W | key == A || key == D)
		ft_offset(key, data);
	if (key == 44 || key == 46)
		ft_altitude(key, data);
	if (key == 45 || key == 61)
		ft_scale(key, data);
	if (key == 65362 || key == 65364 || key == 65361 || key == 65363
		|| key == 59 || key == 39)
		ft_rotate(key, data);
	if (key == SPACE)
		ft_change_view(data);
	if (key == R)
		ft_reset_map(data);
	if (key == C)
		ft_change_color(data);
	if (key == V)
		ft_rand_color(data);
}

int	loop(void *data)
{
	(void)data;
	return (0);
}
