/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:13:39 by jeberle           #+#    #+#             */
/*   Updated: 2024/08/13 18:54:31 by jeberle          ###   ########.fr       */
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
	size_t	old_size;

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (ft_calloc(size, 1));
	old_size = sizeof(ptr);
	alloc = ft_calloc(size, 1);
	if (!alloc)
		return (NULL);
	if ((old_size < size))
		ft_memcpy(alloc, ptr, old_size);
	else
		ft_memcpy(alloc, ptr, size);
	free(ptr);
	return (alloc);
}
