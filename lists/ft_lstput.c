/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:34:50 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/16 21:35:55 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_lstput(t_list **lst, void (*listprint)(void *))
{
	t_list *tmp = *lst;
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