/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:40:11 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/12 19:11:10 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (dst == NULL && src != NULL && size == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
