/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfuta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:56:02 by hfuta             #+#    #+#             */
/*   Updated: 2024/06/22 21:56:05 by hfuta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printchar(char c, t_opt opt)
{
	int	cur;

	cur = 0;
	while (cur + 1 < opt.min_width)
		cur += print_char(' ');
	cur += print_char(c);
	while (cur < opt.offset)
		cur += print_char(' ');
	return (cur);
}
