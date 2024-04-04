/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:03:20 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 01:45:28 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 			get position of last first occuracne of a not in set char
///	@algorithm		iterate trough string till set wount fit to the found char
///					and return position
/// @param s1 		string to search position in
/// @param set 		set to be exclosed
/// @return pre		the position
static int	ft_pre(char const *s1, char const *set)
{
	int		pre;

	pre = 0;
	while (s1[pre] != '\0' && ft_strcontains((char *)set, s1[pre]))
		pre++;
	return (pre);
}

/// @brief 			get position of last last occuracne of a not in set char
///	@algorithm		reverse iterate trough string till set wount fit to the 
///					found char and return position
/// @param s1 		string to search position in
/// @param set 		set to be exclosed
/// @return suf		the position
static int	ft_suf(char const *s1, char const *set, int pre)
{
	int		suf;

	suf = ft_strlen(s1);
	while (suf > pre && ft_strcontains((char *)set, s1[suf - 1]))
		suf--;
	return (suf);
}

/// @brief					remove a charset from beginning and end of a string
///	@algorithm				1)	declare a realtive start (pre) and end (suf) of
///								the to be trimmed string as well as its len,
///								an index and a char pointer to store the result
///							2)	check if s and set are set or return NULL
///							3)	determine pre and suf by external function and
///								initialize index c and len by the difference 
///								of relative end and relative start
///							4)	allocate the memory for res_s by len
///							5)	check allocation successs
///							6)	perform a relative copy for len from s to res_s
///							7)	terminate such and return
/// @param s				str to be modified
/// @param set 				set of chars to be trimmed
/// @return res_s | NULL	trimmed copy of s or NULL if the allocation failed
char	*ft_strtrim(char const *s, char const *set)
{
	int		pre;
	int		suf;
	int		len;
	char	*res_s;
	int		c;

	if (!s || !set)
		return (NULL);
	pre = ft_pre(s, set);
	suf = ft_suf(s, set, pre);
	c = 0;
	len = suf - pre;
	res_s = malloc((len + 1) * sizeof(char));
	if (!res_s)
		return (NULL);
	while (len > c)
	{
		res_s[c] = s[pre + c];
		c++;
	}
	res_s[len] = '\0';
	return (res_s);
}
