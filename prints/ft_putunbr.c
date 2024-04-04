/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:19:51 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 01:44:17 by jeberle          ###   ########.fr       */
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
void	ft_putunbr(unsigned int n)
{
	char	nbr;

	nbr = (n % 10) + '0';
	n = n / 10;
	if (n > 0)
		ft_putnbr(n);
	ft_putchar(nbr);
}
