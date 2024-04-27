/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:02:44 by mpjevic           #+#    #+#             */
/*   Updated: 2024/04/19 20:22:02 by mpjevic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
