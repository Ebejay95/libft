/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:34:50 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 00:46:32 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_lstput(t_list **lst, void (*listprint)(void *), char sep)
{
	t_list	*tmp;

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
