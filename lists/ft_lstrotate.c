/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:00:33 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 00:35:22 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	ft_lstrotateleft(t_list **lst, int n)
{
	t_list	*head;
	t_list	*tail;

	while (n != 0)
	{
		if (!(*lst) || !(*lst)->next)
			return ;
		head = (*lst);
		tail = ft_lstlast((*lst));
		tail->next = head;
		(*lst) = head->next;
		head->next = NULL;
		n--;
	}
}

static void	ft_lstrotateright(t_list **lst, int n)
{
	t_list	*head;
	t_list	*tail;

	while (n != 0)
	{
		if (!(*lst) || !(*lst)->next)
			return ;
		tail = ft_lstlast((*lst));
		head = (*lst);
		tail->next = head;
		(*lst) = tail;
		n--;
	}
}

void	ft_lstrotate(t_list **lst, int n, int direction)
{
	int	len;

	//// TODO - rewrite
	if (!lst || !*lst || n == 0)
		return ;
	len = ft_lstsize(*lst);
	n = n % len;
	if (n == 0)
		return ;
	if (direction > 0)
		ft_lstrotateleft(lst, n);
	else
		ft_lstrotateright(lst, n);
}
