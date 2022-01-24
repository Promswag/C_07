/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:07:55 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 13:27:15 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return (ptr);
}
