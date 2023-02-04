/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:45:19 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/04 15:04:09 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>


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
int	ft_printunsigned(int nbr)
{
	/*char	*str;
	int		cont;

	str = ft_unsigned_itoa(nbr);
	cont = ft_putstr(str);
	free(str);
	return (cont);
	printf("NBR IS %d\n", nbr);*/

	
	 unsigned int nb;
	int len;

	nb = nbr;
	if ( nbr < 0)
	{
		nb = 4294967296 + nbr  ;
		len++;
		
	}
		//printf("printbase prueba:%u\n", nb);

	/*if (nb > 9)
	{
		nb = nb / 10;
		len++;
	}*/
	ft_putnbr_fdunsigned(nb, 1);
	
	
	return(len);
	
}



