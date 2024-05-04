/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_prints_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:27:49 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 10:13:25 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 		write a uint to output and return write state
/// @param i 	the uint to be written
/// @return 	the write state
int	smart_print_u(int fd, unsigned int i)
{
	return (ft_putunbrr_fd(fd, i));
}

/// @brief 		write a lowercase hexa to output and return write state
/// @param i 	the lowercase hexa to be written
/// @return 	the write state
int	smart_print_x(int fd, unsigned int i)
{
	char	*s;
	int		rl;

	s = ft_strbase(i, "0123456789abcdef");
	if (s == NULL)
		return (-1);
	if (ft_putstrr_fd(fd, s) < 0)
	{
		free(s);
		return (-1);
	}
	rl = ft_strlen(s);
	free(s);
	return (rl);
}

/// @brief 		write a uppercase hexa to output and return write state
/// @param i 	the uppercase hexa to be written
/// @return 	the write state
int	smart_print_xup(int fd, unsigned int i)
{
	char	*s;
	int		rl;

	s = ft_strbase(i, "0123456789ABCDEF");
	if (s == NULL)
		return (-1);
	if (ft_putstrr_fd(fd, s) < 0)
	{
		free(s);
		return (-1);
	}
	rl = ft_strlen(s);
	free(s);
	return (rl);
}

/// @brief 			execute the smart print function callback by type with 
///					its arg
/// @param type 	type of arg
/// @param args 	args array
/// @return 		len printed by callback
int	smart_print(int fd, char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = smart_print_c(fd, va_arg(args, int));
	else if (type == 's')
		count = smart_print_s(fd, va_arg(args, char *));
	else if (type == 'p')
		count = smart_print_p(fd, va_arg(args, void *));
	else if (type == 'd')
		count = smart_print_d(fd, va_arg(args, int));
	else if (type == 'i')
		count = smart_print_i(fd, va_arg(args, int));
	else if (type == 'u')
		count = smart_print_u(fd, va_arg(args, unsigned int));
	else if (type == 'x')
		count = smart_print_x(fd, va_arg(args, unsigned int));
	else if (type == 'X')
		count = smart_print_xup(fd, va_arg(args, unsigned int));
	else if (type == '%')
		count = smart_print_c(fd, '%');
	return (count);
}

/// @brief 		print the null pointer case and return length as write state
/// @return 	0x0
int	null_pointer(int fd)
{
	if (ft_putstrr_fd(fd, "0x0") < 0)
		return (-1);
	return (3);
}
