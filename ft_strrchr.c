/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:03:45 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/16 20:01:16 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*rightmost;

	rightmost = NULL;
	while (*s)
	{
		if (*s == (char)c)
			rightmost = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)rightmost);
}
