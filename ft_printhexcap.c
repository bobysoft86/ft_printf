/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexcap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:01:39 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/06 16:57:18 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_printhexcap(unsigned int num)
{
	unsigned int nb;
	int len;

	nb = num;
	len = 0;
	
	if(nb == 0)
		len ++;
	while (nb)
	{
		nb = nb / 16;
		len++;
	}
	ft_putnbr_fdunsignedhexcap(num, 1);
	return(len);
}