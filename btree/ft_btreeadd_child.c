/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeadd_child.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:51:26 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/19 17:07:03 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_btreeadd_child(t_btree *parent, t_btree *new)
{
	if (new == NULL)
		return ;
	if (parent == NULL)
	{
		parent = new;
		return ;
	}
	if (parent->child == NULL)
		parent->child = new;
}
