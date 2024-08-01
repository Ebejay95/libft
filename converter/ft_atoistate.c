/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoistate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:37:30 by jeberle           #+#    #+#             */
/*   Updated: 2024/08/01 12:41:37 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static int	smart_return(int val, int *e)
{
	*e = 1;
	return (val);
}

static int	ft_overflowhandler(long long *i, int *e, const char *str, int *ms)
{
	long long	ax;
	long long	in;

	ax = (long long)INT_MAX;
	in = (long long)INT_MIN;
	if (*ms == 1 && (*i > ax / 10 || (*i == ax / 10 && (*str - '0') > ax % 10)))
	{
		return (smart_return(ax, e));
	}
	else if (*ms == -1)
	{
		if (*i > ax / 10 || (*i == ax / 10 && (*str - '0') > 8))
		{
			return (smart_return(in, e));
		}
		else if (*i == ax / 10 && (*str - '0') == 8)
		{
			*i = in;
			return (in);
		}
	}
	return (*i * 10 + (*str - '0') * *ms);
}

static int	safe_atoi_handler(long long *i, int *e, const char *s, int *ms)
{
	long long	a;

	a = (long long)INT_MAX;
	while (*s != '\0' && ft_isdigit(*s))
	{
		if (*i > a / 10)
			return (ft_overflowhandler(i, e, s, ms));
		else if (*i == a / 10 && ((*s - '0') > a % 10))
			return (ft_overflowhandler(i, e, s, ms));
		else if (*ms == -1 && (*i == a / 10 && (*s - '0') == 8))
			return (ft_overflowhandler(i, e, s, ms));
		*i = *i * 10 + (*s - '0');
		s++;
	}
	while (*s != '\0')
	{
		if (!ft_isspace(*s))
			return (smart_return(0, e));
		s++;
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
int	ft_atoistate(const char *str, int *error)
{
	long long	i;
	int			ms;

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
		return (smart_return(0, error));
	return (safe_atoi_handler(&i, error, str, &ms));
}
