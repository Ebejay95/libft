/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:39:50 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/08 08:07:57 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_color(char *str, char *color)
{
	char	*colored;
	size_t	clrd_size;

	clrd_size = ft_strlen(str) + ft_strlen(color) + ft_strlen(COLOR_RESET) + 1;
	colored = ft_calloc(clrd_size, sizeof(char));
	if (colored == NULL)
		return (str);
	ft_strcpy(colored, color);
	ft_strcat(colored, str);
	ft_strcat(colored, COLOR_RESET);
	return (colored);
}
