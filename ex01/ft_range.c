/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:22:25 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/27 13:40:57 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	*start;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	start = arr;
	while (min < max)
	{
		*arr = min;
		min++;
		arr++;
	}
	return (start);
}
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*arr;
// 	int	size;
// 	int	i;

// 	min = 5;
// 	max = 10;
// 	arr = ft_range(min, max);
// 	if (arr == NULL)
// 	{
// 		printf("Rango inválido (min >= max) o error de memoria.\n");
// 		return (1);
// 	}
// 	size = max - min;
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
