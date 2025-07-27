/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:00:55 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/27 13:16:31 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dup;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*copia;

// 	original = "Hola, mundo!";
// 	copia = ft_strdup(original);
// 	if (copia != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Copia: %s\n", copia);
// 		free(copia);
// 	}
// 	return (0);
// }
