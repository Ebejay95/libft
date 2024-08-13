/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:13:39 by jeberle           #+#    #+#             */
/*   Updated: 2024/08/13 18:59:43 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 		reallocate more memory at a pointer
/// @param ptr 	the pointer as a reference
/// @param size the to be allocated size
/// @return 	a new pointer woth the old content cpoied and size requested
void	*ft_realloc(void *ptr, size_t size)
{
	void	*alloc;

	if (ptr == NULL)
	{
		alloc = ft_calloc(size, 1);
		if (!alloc)
			return (NULL);
	}
	else
	{
		alloc = ft_calloc(size, 1);
		ft_memcpy(alloc, ptr, size);
		free(ptr);
	}
	return (alloc);
}
