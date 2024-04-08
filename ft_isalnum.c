/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.vienna42.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:08:28 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/05 11:02:52 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", ft_isalnum('A'));
	printf("%i\n", ft_isalnum('0'));
	printf("%i\n", ft_isalnum('\t'));
	printf("%i\n", ft_isalnum(' '));
}
*/
