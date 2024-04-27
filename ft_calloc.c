/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:02:17 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/27 15:54:22 by homefolder       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb > 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main()
{
	size_t	count = 8;
	size_t	size = 0;
	void *ptr = calloc(count, size);
	void *ptr_ft = ft_calloc(count, size);

	printf("ptr: %p, %p\n", ptr, ptr_ft);
	free(ptr);
	free(ptr_ft);
}
*/
