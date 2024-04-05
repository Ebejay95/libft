/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:19:52 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 16:28:44 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief		write a string to the desired file descriptor
///	@algorithm	iterate pointer over the string till null termination is reached
///				print each pointed value to the file descriptor
/// @param s 	the string to write
/// @param fd 	the file descriptor
///				0	stdin 	do not use!
///				1	stdout	to console
///				2	stderr	to error log
///				2<	to file in writing status
int	ft_putstrr(char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (write(1, s, 1) < 0)
			return (-1);
		s++;
		count++;
	}
	return (count);
}
