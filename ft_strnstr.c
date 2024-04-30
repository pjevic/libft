/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.vienna42.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:17:35 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/30 17:17:48 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_hay;
	size_t	len_ndl;

	if (*needle == '\0')
		return ((char *)haystack);
	len_hay = ft_strlen(haystack);
	len_ndl = ft_strlen(needle);
	if (len_ndl > len || len_ndl > len_hay)
		return (NULL);
	while (*haystack && len >= len_ndl)
	{
		if (ft_memcmp(haystack, needle, len_ndl) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
