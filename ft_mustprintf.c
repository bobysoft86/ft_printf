/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:45:19 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/06 17:05:42 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int ft_printbase(int nbr)
{
	int nb;
	int len;

	nb = nbr;
	len = 0;

		//printf("printbase prueba:%d\n", nbr);
	if ( nbr < 0)
		nb = -nb;
		len++;

	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
		ft_putnbr_fd(nbr, 1);
	if (nbr == -214748364)
		write(1, "-214748364", 11);
		return(0);
	return(len);
}
int	ft_printunsigned(unsigned int nbr)
{
	 unsigned int nb;
	int len;

	len = 0;
	nb = nbr;

	if (nb == 0)
		len++;
	while(nbr)
	{
		nbr = nbr / 10  ;
		len++;
	}
	ft_putnbr_fdunsigned(nb, 1);
	return(len);
}



