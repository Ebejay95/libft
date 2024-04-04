/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smartfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:34:49 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 01:35:27 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 				free workstring and terminate function 
///	@algorithm			1)	free if s is  not NULL and return NULL
/// @param s 			string to free
/// @param proc 		select process to be run
/// @return 			NULL
char	*ft_smartfree(char *s, int proc)
{
	if (proc)
	{
		if (s != NULL)
		{
			free(s);
			s = NULL;
		}
	}
	else
	{
		free(s);
		s = NULL;
	}
	return (NULL);
}