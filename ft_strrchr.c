/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:03:45 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/07 16:32:58 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rightmost;

	rightmost = NULL;
	while (*s)
	{
		if (*s == (char)c)
			rightmost = (char *)s;
		s++;
	}
	if (c == '\0')
		return (rightmost);
	return (NULL);
}
