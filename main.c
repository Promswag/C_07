/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:03:22 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 17:13:18 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);

//ex00
// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strdup("xdlolmdr");
// 	printf("%s", ptr);
// }

//ex01
// int	main(void)
// {
// 	int	*ptr;
// 	int	*ptr2;

// 	ptr = ft_range(0, 55);
// 	printf("%d, %d\n", ptr[0], ptr[54]);
// 	ptr2 = ft_range(2, 2);
// 	printf("%d\n", (int)ptr2);
// }

//ex02
// int	main(void)
// {
// 	int	length;
// 	int	**range;

// 	length = ft_ultimate_range(range, 0, 55);
// 	printf("%d, %d\n", range[0][0], range[0][54]);
// 	length = ft_ultimate_range(range, 5, 5);
// 	printf("%d, %d\n", range[0][0], range[0][0]);
// }

//ex03
int	main(void)
{
	char	**strong;
	char	*str;

	strong = malloc(sizeof(char **) * 3);
	strong[0] = malloc(sizeof(char *) * 6);
	strong[0] = "Hello";
	strong[1] = malloc(sizeof(char *) * 5);
	strong[1] = "popo";
	strong[2] = malloc(sizeof(char *) * 7);
	strong[2] = "lullul";
	// strong[1] =  "mdr";
	// strong[2] =  "xd";
	printf("Coucou\n");
	str = ft_strjoin(3, strong, " ");
	printf("%s\n", str);
}
