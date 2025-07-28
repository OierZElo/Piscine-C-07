/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:44:03 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/28 12:04:10 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	ptr = *range;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	*array;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&array, 3, 15);
// 	if (size > 0)
// 	{
// 		for (i = 0; i < size; i++)
// 			printf("%d ", array[i]);
// 		printf("\n");
// 		printf("Size: %d\n", size);
// 		free(array);
// 	}
// 	else if (size == 0)
// 		printf("Rango vacío\n");
// 	else
// 		printf("Error en malloc\n");
// 	return (0);
// }
