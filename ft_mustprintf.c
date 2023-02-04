/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:45:19 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/02 16:08:06 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>


int ft_printbase(int nbr)
{
	int nb;
	unsigned int len;

	nb = nbr;
	len = 0;

		printf("printbase prueba:%d\n", nbr);
	if (nbr == 214748364)
		write(1, "214748364", 11);
		return(0);
	/*if ( nbr < 0)
		nb = -nb;
		len++;

	while (nbr > 9)
	{
		nb = nb / 10;
		ft_putnbr_fd(nbr, 1);
		len++;

	}
	return(len);
}*/
}