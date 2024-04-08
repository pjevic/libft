/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.vienna42.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:29:12 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/05 15:35:26 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}
/*
int	main()
{
	char string[] = "string";
	
	printf("%s\n", string);
	printf("%s\n", ft_memset(string, 'a', 6));
	printf("%p\n", ft_memset(string, 'a', 6));
	printf("%s\n", ft_memset(string, 'a', sizeof(string) - 1));
	printf("%p\n", &string);

	return (0);
}
*/
