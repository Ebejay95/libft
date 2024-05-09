/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:17:59 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/09 13:25:04 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_array_free(char **array)
{
	int	length;

	if(array == NULL)
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