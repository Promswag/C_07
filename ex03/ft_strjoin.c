/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:27:44 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/27 19:40:00 by gbaumgar         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = size * (ft_strlen(sep) - 1);
	while (i < size)
		length += ft_strlen(strs[i++]);
	str = malloc(sizeof(char) * length);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
