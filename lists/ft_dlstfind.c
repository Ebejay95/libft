/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:58:42 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/02 17:18:05 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	*ft_dlstfind(t_dlist **lst, void *content, int (*cmp)(void *, void *))
{
	while (*lst != NULL)
	{
		if (cmp(content, (*lst)->content) == 0)
			return (lst);
		lst = &((*lst)->next);
	}
	return (NULL);
}
