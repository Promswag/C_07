/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:27:44 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 17:11:23 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	length = size * ft_strlen(sep) - 1;
	printf("Coucou\n");
	while (i < size)
	{
		printf("XD\n");
		length += ft_strlen(strs[i]);
		i++;
	}
	printf("POG\n");
	str = malloc(sizeof(char *) * length);
	printf("PLANT\n");
	while (j < size)
	{
		printf("z\n");
		i = 0;
		while (strs[j][i] != '\0')
		{
			printf("t\n");
			str[k] = strs[j][i];
			i++;
			k++;
		}
		str[k] = sep[0];
		k++;
		j++;
	}
	return (str);
}
