/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:34:30 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/17 19:02:34 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	chr_in_str(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && chr_in_str(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1);
	while (end > start && chr_in_str(set, *(s1 + (end - 1))))
		end--;
	trimed = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trimed)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trimed + i) = *(s1 + (start + i));
		i++;
	}
	*(trimed + i) = '\0';
	return (trimed);
}
