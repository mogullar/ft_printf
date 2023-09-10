/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:21:33 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/15 01:21:56 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *p)
{
	static char		bump[16];
	int				x;
	int				i;
	unsigned long	temp;

	temp = (unsigned long)p;
	i = 0;
	x = 0;
	if (!temp)
		return (write(1, "0x0", 3));
	while (temp > 0)
	{
		bump[i] = "0123456789abcdef"[temp % 16];
		temp = temp / 16;
		i++;
	}
	x += write(1, "0x", 2);
	while (i--)
	{
		write(1, &bump[i], 1);
		x++;
	}
	return (x);
}
