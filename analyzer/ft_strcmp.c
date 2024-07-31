/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:26:11 by jeberle           #+#    #+#             */
/*   Updated: 2024/07/31 19:40:50 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 					compare to strings
/// @algorithm				1)	cast the string pointers and the references
///								chars to unsigned char to prevent comparing
///								negative ascii
///							2)	perform search by comparison on each char in
///								the range by moving the pointers and return
///								occurance of differences c as the difference
///							3)	return 0 if nothing was found
/// @param s1 				string comparison reference
/// @param s2				string to be compared
/// @return  us1 - us2 | 0	the difference in decimal ascii numbers
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	us1;
	unsigned char	us2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (-1);
	if (s2 == NULL)
		return (1);
	while (*s1 != '\0' || *s2 != '\0')
	{
		us1 = (unsigned char)*s1;
		us2 = (unsigned char)*s2;
		if (us1 != us2)
			return (us1 - us2);
		s1++;
		s2++;
	}
	return (0);
}
