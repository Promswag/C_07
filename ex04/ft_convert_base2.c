/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:27:08 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/31 12:49:25 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_char_is_whitespace(char c)
{	
	int		i;
	char	ws[6];

	i = 0;
	ws[0] = ' ';
	ws[1] = '\f';
	ws[2] = '\n';
	ws[3] = '\r';
	ws[4] = '\t';
	ws[5] = '\v';
	while (i < 6)
		if (c == ws[i++])
			return (1);
	return (0);
}

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;
	int	c;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		c = 0;
		while (base[j])
		{
			if (base[j] == base[i])
				c++;
			if (c > 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_char_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	ft_scale(unsigned int nb, unsigned int size)
{
	unsigned int	scale;

	scale = 1;
	while (nb >= size)
	{
		nb /= size;
		scale *= size;
	}
	return (scale);
}
