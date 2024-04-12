/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:40:11 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/11 14:51:07 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	space_left;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + dst_len);
	space_left = size - dst_len - 1;
	if (src_len > space_left)
		src_len = space_left;
	ft_memcpy(dst + dst_len, src, src_len);
	dst[dst_len + src_len] = '\0';
	return (dst_len + src_len);
}
