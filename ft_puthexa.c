/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:21:00 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/15 01:21:23 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int hexa, char *list)
{
	static char	bump[8];
	int			x;
	int			i;

	i = 0;
	x = 0;
	if (hexa == 0)
		return (write(1, "0", 1));
	while (hexa > 0)
	{
		bump[i] = list[hexa % 16];
		hexa = hexa / 16;
		i++;
	}
	while (i--)
	{
		write(1, &bump[i], 1);
		x++;
	}
	return (x);
}
