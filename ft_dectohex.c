/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:39:44 by kkarakus          #+#    #+#             */
/*   Updated: 2023/10/27 17:52:41 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dectohex(unsigned int p, char c, long *i)
{
	char			*base;

	if (c == 'x' || c == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (p > 15)
		ft_dectohex(p / 16, c, i);
	ft_putchar(base[p % 16], i);
}
