/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeadd_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:11:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/19 17:07:18 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_btreeadd_next(t_btree *parent, t_btree *new)
{
	if (new == NULL)
		return ;
	if (parent == NULL)
	{
		parent = new;
		return ;
	}
	if (parent->next == NULL)
		parent->next = new;
}
