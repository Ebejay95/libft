/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_strcchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:57:36 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/05 16:03:32 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_array_strcchr(char **array, char c)
{
	int		length;
	int		i;
	int		count;

	count = 0;
	if (array == NULL)
		return (0);
	i = 0;
	length = ft_array_length(array);
	while (length > i)
	{
		count = count + ft_strcchr(array[i], c);
		i++;
	}
	return (count);
}
