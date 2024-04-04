/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:06:07 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 00:55:29 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief		check a char represented by an int to be 32 - 126 defined as
///				printable
/// @algorithm	check the char by ascii range 32 - 126
/// @param c	char represented by an int to check
/// @return		int 1 || 0
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
