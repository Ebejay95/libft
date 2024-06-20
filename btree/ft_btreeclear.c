/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:41:02 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/20 10:42:35 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_btreeclear(t_btree **root)
{
	if (root == NULL || *root == NULL)
		return ;
	ft_btreeclear(&((*root)->child));
	ft_btreeclear(&((*root)->next));
	free(*root);
	*root = NULL;
}
