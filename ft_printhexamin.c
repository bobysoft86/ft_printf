/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:42:32 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/06 17:02:33 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_printhexamin(unsigned int num)

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
	ft_putnbr_fdunsignedhex(num, 1);
		return(len);
}

