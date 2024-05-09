/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:09:52 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/09 13:22:10 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_putarray(char **array)
{
	int	i;
	int	length;

	if(array == NULL)
		return ;
	length = ft_array_length(array);
	i = 0;
	ft_printf("[\n");
	while (i < length && array[i] != NULL)
	{
		if(i == (length - 1))
			ft_printf("\t%i : \"%s\"\n", i, array[i]);
		else
			ft_printf("\t%i : \"%s\",\n", i, array[i]);
		i--;
	}
	ft_printf("]\n");
}