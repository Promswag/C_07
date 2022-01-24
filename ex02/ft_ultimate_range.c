/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:15:44 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 13:27:25 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	delta;
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	delta = max - min;
	ptr = malloc(sizeof(int) * delta);
	i = 0;
	while (min < max)
	{
		ptr[i] = min++;
		i++;
	}
	range[0] = ptr;
	return (delta);
}
