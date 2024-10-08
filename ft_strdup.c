/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:27:10 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/12 20:06:46 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	char	*ptr;

	len = ft_strlen(s);
	dup = (char *)malloc(len * sizeof(char) + 1);
	ptr = dup;
	if (dup == NULL)
		return (NULL);
	while (*s)
		*dup++ = *s++;
	*dup = 0;
	return (ptr);
}
