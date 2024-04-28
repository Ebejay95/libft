/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:34:58 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/25 00:37:42 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

t_list	**ft_lstfind(t_list **lst, void *content, int (*cmp)(void *, void *))
{
	while (*lst != NULL)
	{
		if (cmp(content, (*lst)->content) == 0)
			return (lst);
		lst = &((*lst)->next);
	}
	return (NULL);
}
