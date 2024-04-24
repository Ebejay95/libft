/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:57:19 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 01:42:08 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	swap_front_to_back(t_dlist **lst)
{
	t_dlist	*front;
	t_dlist	*back;

	front = (*lst);
	back = ft_dlstlast((*lst));
	back->next = front;
	front->prev = back;
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	front->next = NULL;
}

static void	swap_back_to_front(t_dlist **lst)
{
	t_dlist	*back;

	back = ft_dlstlast((*lst));
	(*lst)->prev = back;
	if (back->prev)
	{
		back->prev->next = NULL;
		back->prev = NULL;
	}
	back->next = (*lst);
	(*lst) = back;
}

void	ft_dlstrotate(t_dlist **lst, int n, int direction)
{
	if (lst == NULL || (*lst) == NULL || (*lst)->next == NULL)
		return ;
	if (direction > 0)
	{
		while (n > 0)
		{
			swap_front_to_back(lst);
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			swap_back_to_front(lst);
			n--;
		}
	}
}
