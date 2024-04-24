/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:33:46 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 00:36:23 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_dlstput(t_dlist **lst, void (*listprint)(void *), char sep)
{
	t_dlist	*tmp;

	tmp = *lst;
	if (lst == NULL || *lst == NULL)
	{
		return ;
	}
	while (tmp != NULL)
	{
		listprint(tmp->content);
		write(1, &sep, 1);
		tmp = tmp->next;
	}
}
