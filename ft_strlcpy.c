/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:22:06 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/08 15:55:13 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	
	//srclen = ft_strlen(src);
	while (src[srclen])
		srclen++;

	if (src == NULL || dst == NULL)
		return (0);
	if (size != 0)
	{
		while (*src && size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
                                                           