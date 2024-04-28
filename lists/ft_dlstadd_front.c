/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:21:02 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 00:40:37 by jeberle          ###   ########.fr       */
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
