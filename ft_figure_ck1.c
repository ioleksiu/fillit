/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_ck1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:28:19 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:35:48 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_figure_ck1(char *s)
{
	char	*p;
	int		i;

	i = 20;
	while (*s)
	{
		p = ft_strndup(s, i);
		ft_figure_ck(p, 0, 0);
		s += 21;
	}
	return (0);
}
