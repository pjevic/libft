/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:53:42 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/17 23:16:44 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static long long	abs_val(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
