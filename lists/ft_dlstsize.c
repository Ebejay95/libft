/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:44:54 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/25 00:37:56 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_dlstsize(t_dlist *dlst)
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
