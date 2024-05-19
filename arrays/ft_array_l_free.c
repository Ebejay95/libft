/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_l_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:05:05 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/15 11:13:04 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_array_l_free(char **array, size_t len)
{
	size_t	i;

	i = 0;
	if (array == NULL)
		return ;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
