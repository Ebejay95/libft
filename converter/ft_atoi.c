/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:37:30 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/27 20:06:58 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static int	smart_return(int val, int *error)
{
	*error = 1;
	return (val);
}

static int	ft_overflowhandler(long *i, int *error, const char *str, int *ms)
{
	long	ax;
	long	in;

	ax = (long)INT_MAX;
	in = (long)INT_MIN;
	if (*ms == 1 && (*i > ax / 10))
		return (smart_return(ax, error));
	else if (*ms == 1 && (*i == ax / 10 && (*str - '0') > ax % 10))
		return (smart_return(ax, error));
	else if (*ms == -1 && (*i > ax / 10))
		return (smart_return(in, error));
	else if (*ms == -1 && (*i == ax / 10 && (*str - '0') > -(in % 10 + 1)))
		return (smart_return(in, error));
	return (*i * 10 + (*str - '0') * *ms);
}

static int	safe_atoi_handler(long *i, int *error, const char *str, int *ms)
{
	while (*str != '\0' && ft_isdigit(*str))
	{
		if (*i > INT_MAX / 10)
			return (ft_overflowhandler(i, error, str, ms));
		else if (*i == INT_MAX / 10 && ((*str - '0') > INT_MAX % 10))
			return (ft_overflowhandler(i, error, str, ms));
		else if ((*str - '0') > -(INT_MIN % 10 + 1))
			return (ft_overflowhandler(i, error, str, ms));
		*i = *i * 10 + (*str - '0');
		str++;
	}
	*i = *i * *ms;
	return ((int)*i);
}

/// @brief 		provides a int by a string that follows a strict format
/// 			it can contain leading whitespace chars, one sign (+ || -) 
///				and will handle edge cases.
///
///	@algorithm	1)	initialize an int by 0 for later usage
///				2)	walk trough the strings whiltespaces till u find a non 
///					whitespace char
///				2)	check if the non whitespace char is a sign (+ || -)
///					and store the state if minus is set
///				3)	check if the following char is a digit ascii char
///				4)	iterate over the string till a char is not a digit ascii 
///					char and add each char value to the int i multiplied
///					by 10 till u reach the strings termination
///				5)	multiply by -1 if the string had a sign -
///				
/// @param str 
/// @return 	int i || 0
int	ft_atoi(const char *str, int *error)
{
	long	i;
	int		ms;

	*error = 0;
	i = 0;
	ms = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			ms = -1;
		str++;
	}
	if (!ft_isdigit(*str))
		return (0);
	return (safe_atoi_handler(&i, error, str, &ms));
}
