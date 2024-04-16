/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlistsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:44:54 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/13 13:45:38 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int		ft_dlstsize(t_dlist *dlst)
{
	int	len;

	len = 0;
	while (dlst != NULL)
	{
		dlst = dlst->next;
		len++;
	}
	return (len);
}
