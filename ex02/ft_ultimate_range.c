/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:15:44 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/27 18:41:44 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	delta;
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	delta = max - min;
	ptr = malloc(sizeof(int) * delta);
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min++;
		i++;
	}
	*range = ptr;
	return (delta);
}
