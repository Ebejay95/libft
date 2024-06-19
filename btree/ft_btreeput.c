/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:24:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/19 11:33:22 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_btreeput(t_btree *tree, void (*treeprint)(void *))
{
	if (tree == NULL)
		return ;
	treeprint(tree->content);
	ft_btreeput(tree->child, treeprint);
	ft_btreeput(tree->next, treeprint);
}
