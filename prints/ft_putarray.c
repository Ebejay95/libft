/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:09:52 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/15 14:12:11 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_putarray(char **array)
{
	int	i;
	int	length;

	if (array == NULL)
		return ;
	length = ft_array_length(array);
	i = 0;
	ft_printf("[\n");
	while (i < length)
	{
		if (i == (length - 1))
			ft_printf("  %i : \"%s\"\n", i, array[i]);
		else
			ft_printf("  %i : \"%s\",\n", i, array[i]);
		i++;
	}
	ft_printf("]\n");
}
