/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 08:51:02 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/17 08:55:18 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_dlist **lst, void (*del)(void *))
{
	t_dlist	*buffer;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		buffer = (*lst)->next;
		ft_dlstdelone(*lst, del);
		*lst = buffer;
	}
}