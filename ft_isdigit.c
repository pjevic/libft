/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.vienna42.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:26:46 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/05 11:05:19 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%i\n", ft_isdigit('a'));
	printf("%i\n", ft_isdigit('1'));
	printf("%i\n", ft_isdigit('\t'));
	return (0);
}
*/
