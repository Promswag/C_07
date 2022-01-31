/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:15:44 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/31 13:04:59 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	delta;
	int			*tab;
	long int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	delta = (long)max - (long)min;
	tab = malloc(sizeof(int) * delta);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (delta);
}
