/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:53:42 by mpjevic           #+#    #+#             */
/*   Updated: 2024/05/01 15:29:25 by mpjevic          ###   ########.fr       */
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
	long long	nbr;

	nbr = 1;
	if (n < 0)
		nbr *= -n;
	else
		nbr *= n;
	return (nbr);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*a;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	*(a + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(a + len) = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (sign)
		*(a) = 45;
	return (a);
}
