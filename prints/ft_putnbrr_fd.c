/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:07:19 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 10:20:41 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief		check the edge cases and modify length tracker and n by ref
///	@algorithm	1)	handle the edge case of 0 and -2147483648
///				3)	handle negative ints by writing - and progress with a
///					positive int for the algorithm to work
/// @param n 	the int to write
/// @param r 	pointer to an int for tracking the length
///	@return r | -1
static int	casehandler(int fd, int *n, int *r)
{
	int	buf;

	if (*n == -2147483648)
	{
		buf = write(fd, "-2", 2);
		if (buf == -1)
			return (-1);
		*r += buf;
		*n = 147483648;
	}
	else if (*n < 0)
	{
		*n = -*n;
		buf = ft_putcharr_fd(fd, '-');
		if (buf == -1)
			return (-1);
		*r = *r + buf;
	}
	return (0);
}

/// @brief		write a int to the desired file descriptor and return the 
///				state of used write functions
///	@algorithm	1)	declare a int to be parsed to write for later writing by
///					ascii addition
///				2)	edgecases are send to case handler and n modified if needed
///					by working on pointer reference the tracking is done here
///				4)	divide int by 10 and parse it to recursion if bigger than 0
///				5)	print the car after the recursion call for right order
///				6)	update r accordingly and return the sum of write state
/// @param n 	the int to write
/// @param r 	pointer to an int for tracking the length
///	@return r | -1
static int	ft_putnbrr_rec(int fd, int n, int *r)
{
	int	buf;

	if (casehandler(fd, &n, r) == -1)
		return (-1);
	if (n >= 10)
	{
		if (ft_putnbrr_rec(fd, n / 10, r) == -1)
			return (-1);
	}
	buf = ft_putcharr_fd(fd, (n % 10) + '0');
	if (buf == -1)
		return (-1);
	*r = *r + buf;
	return (0);
}

/// @brief		write a int to the desired file descriptor and return the 
///				state of used write functions
///	@algorithm	1)	declare r for tracking the printed lenght of all used
///					write calls
///				2)	call the recursive putnbr and return -1 for any write
///					error inside
///				3)	without error return the r as sum of all written char
///					length description
/// @param n 	the int to write
///	@return r | -1
int	ft_putnbrr_fd(int fd, int n)
{
	int	r;

	r = 0;
	if (ft_putnbrr_rec(fd, n, &r) == -1)
		return (-1);
	return (r);
}
