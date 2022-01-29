/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:27:11 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/29 13:37:19 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int				ft_strlen(char *str);
int				ft_char_is_whitespace(char c);
int				ft_base_is_valid(char *base);
int				ft_find_char_in_str(char c, char *str);
unsigned int	ft_scale(unsigned int nb, unsigned int size);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	size;

	i = 0;
	sign = 1;
	result = 0;
	size = ft_strlen(base);
	while (ft_char_is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && ft_find_char_in_str(str[i], base) != -1)
		result = result * size + ft_find_char_in_str(str[i++], base);
	return (result * sign);
}

char	*ft_itoa_base(int nb, char *base)
{
	char			*str;
	int				i;
	unsigned int	_nb;
	unsigned int	scale;

	str = malloc(sizeof(char) * 34);
	i = 0;
	_nb = nb;
	if (nb < 0)
	{
		_nb = -nb;
		str[i++] = '-';
	}
	scale = ft_scale(_nb, ft_strlen(base));
	while (scale != 0)
	{
		if (!(i == 0 && _nb / scale == 0)
			&& !(i == 1 && _nb / scale == 0 && str[i - 1] == '-'))
			str[i++] = base[_nb / scale];
		_nb %= scale;
		scale /= ft_strlen(base);
	}
	str[i] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_base_is_valid(base_from) || !ft_base_is_valid(base_to))
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
