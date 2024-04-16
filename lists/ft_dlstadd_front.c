/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:21:02 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:28:47 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_dlstadd_front(t_dlist **lst, t_dlist *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst)
   		(*lst)->prev = new;
	new->prev = NULL;
	new->next = *lst;
	*lst = new;
}
