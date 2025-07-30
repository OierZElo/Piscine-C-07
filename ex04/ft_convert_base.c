/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:42:38 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/30 12:55:05 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		check_base(char *base);
int		ft_atoi_base(char *str, char *base);

char	*fill_rec(char *res, long nb, char *base, int base_len)
{
	if (nb >= base_len)
		res = fill_rec(res, nb / base_len, base, base_len);
	*res = base[nb % base_len];
	return (res + 1);
}

int	ft_nbrlen(long nbr, int base_len)
{
	int	len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr)
	{
		nbr = nbr / base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	long	nb;
	char	*res;
	char	*ptr;

	if (check_base(base))
		return (NULL);
	base_len = ft_strlen(base);
	nb = nbr;
	len = ft_nbrlen(nb, base_len);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ptr = res;
	if (nb < 0)
	{
		*ptr++ = '-';
		nb = -nb;
	}
	ptr = fill_rec(ptr, nb, base, base_len);
	*ptr = '\0';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (check_base(base_from) || check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(nb, base_to));
}

// int	main(void)
// {
// 	char	*result;

// 	result = ft_convert_base("1010", "01", "0123456789");
// 	printf("Resultado: %s\n", result);
// 	free(result);
// 	return (0);
// }
