/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:30:19 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/27 19:45:25 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///TODO:		set in own file after evals
/// @brief		checks if a char is an char declared as a whitespace character
///				by comparing the ascii int values in their ranges
/// @param c 	the char to check
/// @return 	0 || 1 depending on the char
int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
