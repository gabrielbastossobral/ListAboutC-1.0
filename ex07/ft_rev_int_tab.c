/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:18:12 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/19 17:52:29 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	starting;
	int	ending;
	int	temp;

	starting = 0;
	ending = size - 1;
	while (starting < ending)
	{
		temp = tab[starting];
		tab[starting] = tab[ending];
		tab[ending] = temp;
		starting++;
		ending--;
	}
}
