/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:19:52 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/15 10:41:01 by jeberle          ###   ########.fr       */
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
void	ft_putstr_fd(int fd, char *s)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
