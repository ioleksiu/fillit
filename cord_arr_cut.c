/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cord_arr_cut.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:24:25 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 16:59:25 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**cord_arr_cut(int **ar)
{
	int		i;
	int		min;
	int		m;

	i = 0;
	m = min_four(ar[0][0], ar[1][0], ar[2][0], ar[3][0]);
	min = min_four(ar[0][1], ar[1][1], ar[2][1], ar[3][1]);
	if (ar[i][1] != 0)
		while (i < 4)
			ar[i++][1] -= min;
	i = 0;
	if (ar[i][0] != 0)
		while (i < 4)
			ar[i++][0] -= m;
	return (ar);
}
