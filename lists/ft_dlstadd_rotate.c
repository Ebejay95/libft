/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:57:19 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 20:57:41 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void    ft_dlstadd_rotate(t_dlist **dlst, int n, int direction)
{
    t_dlist *tail;
    t_dlist *new_head;
    int     len;
	int		j;
    if (!dlst || !*dlst || n == 0)
        return;

    len = ft_dlstsize(*dlst);
    n = n % len;
    if (n == 0)
        return;
    if (direction == 1)
        n = len - n;
    if (n == 0)
        return;
    t_dlist *current = *dlst;
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
    	tail = (*dlst)->prev;
    	tail->next = *dlst;
    	(*dlst)->prev = tail;
    	(*dlst) = new_head;
	}
}