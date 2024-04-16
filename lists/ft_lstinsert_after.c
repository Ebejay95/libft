/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:14:56 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:16:28 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_lstinsert_after(t_list **lst, t_list *next, t_list *new)
{
	if (lst == NULL || next == NULL || new == NULL)
		return ;
	while (*lst == NULL && (*lst)->next != next)
		lst = &((*lst)->next);
	if (lst)
	{
		new->next = (*lst)->next;
		(*lst)->next = new;
	}
}
