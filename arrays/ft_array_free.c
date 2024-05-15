/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:17:59 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/15 10:03:09 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_array_free(char **array)
{
	int	length;

	if (array == NULL)
		return ;
	length = ft_array_length(array);
	length--;
	while (length >= 0 && array[length] != NULL)
	{
		free(array[length]);
		length--;
	}
	free(array);
}
