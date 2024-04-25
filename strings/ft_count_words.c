/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:54:13 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/25 14:01:05 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief		count the substrings of s without modifying s in the split
///				function
///	@algorithm	1)	define and initialize a int to count by as well as an i 
///					terator and a variable for thr state toggle
///				2)	walk trough s till the termination while searching for c
///					till a substring (something not c) is found. toggle 
///					state and count a subtring if a character not c occurs
///					and the state has been in the "gap" mode. check in that
///					condition aswell to be not the last position before s
///					terminates
///				3)	return the count of determined substrings
/// @param s	the string analyze
/// @param c 	the char to count splits by
/// @return 	number of splits of s by c
size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		i;
	int		state;

	state = 1;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (c != s[i] && state == 1)
			state = 0;
		if ((c == s[i] || s[i + 1] == '\0') && state == 0)
		{
			state = 1;
			count++;
		}
		i++;
	}
	return (count);
}
