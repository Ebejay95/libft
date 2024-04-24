/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:00:33 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 01:20:12 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_lstrotate(t_list **lst, int n, int direction)
{
	t_list	*front;
	t_list	*back;
	t_list	*penultimate;

	if (lst == NULL || (*lst) == NULL || (*lst)->next == NULL)
		return ;
	if (direction > 0)
	{
		while (n > 0)
		{
			front = (*lst);
			back = ft_lstlast((*lst));
			back->next = front;
			(*lst) = (*lst)->next;
			front->next = NULL;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			front = (*lst);
			penultimate = ft_lstpenultimate((*lst));
			if(penultimate == NULL || penultimate->next == NULL)
				return ;
			back = penultimate;
			front = penultimate->next;
			back->next = NULL;
			front->next = (*lst);
			(*lst) = front;
			n--;
		}
	}
}
