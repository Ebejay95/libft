/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:00:33 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:49:30 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void    ft_lstrotate(t_list **lst, int n, int direction)
{
    t_list *tail = NULL;
    t_list *new_head;
    t_list *current;
    int     len;
	int		j;
    if (!lst || !*lst || n == 0)
        return;

    len = ft_lstsize(*lst);
    n = n % len;
    if (n == 0)
        return;
    if (direction == 1)
        n = len - n;
    if (n == 0)
        return;
	j = 0;
	current = NULL;
	*current = **lst;
    while (j < len - n - 1)
	{
        current = current->next;
		j++;
	}
    new_head = current->next;
    current->next = NULL;
	if(new_head != NULL)
	{
    	tail->next = *lst;
    	(*lst) = new_head;
	}
}