/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kgv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:54:06 by jeberle           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/28 16:07:25 by jonathanebe      ###   ########.fr       */
=======
/*   Updated: 2024/04/25 00:24:41 by jeberle          ###   ########.fr       */
>>>>>>> origin/master
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

//int	ft_kgv(int a, int b)
//{
//	int n;
//
//	n = 0;
//	if ((a == 0) || (b == 0))
//		return (0);
//	if(a >= b)
//		n = a;
//	if(b >= a)
//		n = b;
//	while (1)
//	{
//		if((n % a == 0) && (n % b == 0))
//			return (n);
//		n++;
//	}
//}

int	ft_kgv(int a, int b)
{
	if ((a == 0) || (b == 0))
		return (0);
	return ((a / ft_ggt(a, b)) * b);
}
