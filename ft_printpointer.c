/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:47:31 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/06 15:11:35 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printpointer(unsigned long i)
{
unsigned int entrada;

entrada = (unsigned int) i;


return(ft_printhexamin(entrada));



}