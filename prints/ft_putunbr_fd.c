/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:43:14 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 21:43:58 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief		write a int to the desired file descriptor and return the 
///				state of used write functions
///	@algorithm	1)	declare r for tracking the printed lenght of all used
///					write calls
///				2)	divide int by 10 and parse it to recursion if bigger than 0
///				3)	print the car after the recursion call for right order
///				4)	without error return the r as sum of all written char
///					length description
/// @param n 	the int to write
///	@return r | -1
void	ft_putunbr_fd(int fd, unsigned int n)
{
	char	nbr;

	nbr = (n % 10) + '0';
	n = n / 10;
	if (n > 0)
		ft_putnbr_fd(fd, n);
	ft_putchar_fd(fd, nbr);
}
