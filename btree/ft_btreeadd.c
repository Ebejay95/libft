/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:11:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/19 11:33:06 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_btreeadd(t_btree *parent, t_btree *new)
{
	t_btree	*current;

	if (new == NULL || parent == NULL)
		return ;
	if (parent->next == NULL)
		parent->next = new;
	else
	{
		current = parent;
		while (current->child != NULL)
			current = current->child;
		current->child = new;
	}
}
