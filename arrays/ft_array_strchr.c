/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:41:36 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/28 22:43:38 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_array_strchr(char **array, char c)
{
	int		length;
	int		i;
	char	*found;

	if (array == NULL)
		return (NULL);
	i = 0;
	found = NULL;
	length = ft_array_length(array);
	while (length > i && found == NULL)
	{
		found = ft_strchr(array[i], c);
		i++;
	}
	return (found);
}
