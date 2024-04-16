/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:21:02 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/13 14:24:12 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_dlstadd_front(t_dlist **dlst, t_dlist *new)
{
	if (new == NULL || dlst == NULL)
		return ;
	new->prev = NULL;
	new->next = *dlst;
	*dlst = new;
}