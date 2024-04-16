/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:57:19 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:28:13 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void    ft_dlstrotate(t_dlist **lst, int n, int direction)
{
    t_dlist *tail;
    t_dlist *new_head;
    int     len;
	int		j;
    if (!lst || !*lst || n == 0)
        return;

    len = ft_dlstsize(*lst);
    n = n % len;
    if (n == 0)
        return;
    if (direction == 1)
        n = len - n;
    if (n == 0)
        return;
    t_dlist *current = *lst;
	j = 0;
    while (j < len - n - 1)
	{
        current = current->next;
		j++;
	}
    new_head = current->next;
    current->next->prev = NULL;
    current->next = NULL;
	if(new_head != NULL)
	{
    	tail = (*lst)->prev;
    	tail->next = *lst;
    	(*lst)->prev = tail;
    	(*lst) = new_head;
	}
}