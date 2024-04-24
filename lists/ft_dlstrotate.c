/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:57:19 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/24 11:22:52 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void    ft_dlstrotateleft(t_dlist **lst, int n)
{
	ft_putstr("ft_dlstrotateleft\n");
	t_dlist *head;
	t_dlist *tail;

	while (n != 0)
	{
    	if (!(*lst) || !(*lst)->next)
        	return;
		head = (*lst);
		tail = ft_dlstlast((*lst));
		tail->next = head;  
		head->prev = tail;
		(*lst) = head->next;
		(*lst)->prev = NULL;   
		head->next = NULL; 
		n--;
	}
}
void    ft_dlstrotateright(t_dlist **lst, int n)
{
	ft_putstr("ft_dlstrotateright\n");
	t_dlist *head;
	t_dlist *tail;

	while (n != 0)
	{
    	if (!(*lst) || !(*lst)->next)
        	return;
		tail = ft_dlstlast((*lst));
		head = (*lst);
		head->prev = tail;
		tail->next = head;
		tail->prev->next = NULL;
		(*lst) = tail;
		n--;
	}
}
void    ft_dlstrotate(t_dlist **lst, int n, int direction)
{
	int len;

	ft_putstr("ft_dlstrotate\n");
    if (!lst || !*lst || n == 0)
        return;

    len = ft_dlstsize(*lst);
    n = n % len;
    if (n == 0)
        return;
    if (direction > 0)
        ft_dlstrotateleft(lst, n);
	else
        ft_dlstrotateright(lst, n);
}