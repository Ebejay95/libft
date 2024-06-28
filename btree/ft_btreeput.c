/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:24:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/28 15:30:17 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	puttree(t_btree **tree, void (*cb)(void *), int depth, int is_last)
{
	int	i;

	i = 0;
	if (tree == NULL || (*tree) == NULL)
		return ;
	while (i < (depth - 1))
	{
		ft_printf("\033[0;34m│   \033[0m");
		i++;
	}
	if (depth > 0)
	{
		if (is_last)
			ft_printf("\033[0;34m└─\033[0m");
		else
			ft_printf("\033[0;34m├─\033[0m");
	}
	cb((*tree)->content);
	ft_printf("\n");
	if ((*tree)->child)
		puttree(&((*tree)->child), cb, depth + 1, (*tree)->next == NULL);
	if ((*tree)->next)
		puttree(&((*tree)->next), cb, depth, 0);
}

void	ft_btreeput(t_btree **tree, void (*cb)(void *))
{
	if (tree == NULL)
		return ;
	puttree(tree, cb, 0, 1);
}
