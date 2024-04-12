/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:27:10 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/11 16:58:31 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		*d;
	char	*dup;

	len = ft_strlen(s);
	d = (char *)malloc(len * sizeof(char) + 1);
	dup = d;
	if (d == NULL)
		return (NULL);
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dup);
}
