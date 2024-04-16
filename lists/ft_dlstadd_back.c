/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:12:01 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:12:15 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		new->prev = NULL;
		return ;
	}
	while ((*lst)->next != NULL)
		lst = &((*lst)->next);
	(*lst)->next = new;
	new->prev = (*lst);
	new->next = NULL;
}
