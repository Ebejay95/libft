/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:33:46 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:36:01 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_dlstput(t_dlist **lst, void (*listprint)(void *))
{
	t_dlist *tmp = *lst;
	if (lst == NULL || *lst == NULL)
	{
		return ;
	}
	while (tmp != NULL)
	{
		listprint(tmp->content);
		write(1, "\n", 1);
		tmp = tmp->next;
	}
}