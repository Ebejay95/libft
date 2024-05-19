/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:44:16 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/15 10:41:08 by jeberle          ###   ########.fr       */
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
int	ft_putunbrr_fd(int fd, unsigned int n)
{
	char	nbr;
	int		r;
	int		wr;
	int		rr;

	r = 0;
	nbr = (n % 10) + '0';
	n = n / 10;
	if (n > 0)
	{
		rr = ft_putnbrr_fd(fd, n);
		if (rr == -1)
			return (-1);
		r = r + rr;
	}
	wr = ft_putcharr_fd(fd, nbr);
	if (wr == -1)
		return (-1);
	else
		r = r + wr;
	return (r);
}
