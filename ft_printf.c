/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:50:08 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/04 13:35:51 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int ft_printelection(char entrada, va_list args)
{
	int i;

	i = 0;

	if(entrada == 'c')
	i = i + ft_putchar((char) va_arg(args, int));
	if (entrada == 's')
		i = i + ft_putstr (va_arg(args, char *));
	if (entrada == 'd' || entrada == 'i' )
		i = i + ft_printbase(va_arg(args, int));
	if (entrada == 'u')
		i = i + ft_printunsigned(va_arg(args, unsigned int));
		//printf("VA_ARG <%d>\n", va_arg(args, int));


	return(i);
}

int ft_printf(char const *entrada, ...)
{
	int i;
	va_list		args;

	i = 0;

	va_start(args, entrada);

	while(*entrada != '\0')
	{
		if ( *entrada == '%')
		{
			entrada++;
			if (ft_strchr("cspdiuxX%", *entrada))
				i = i + (ft_printelection(*entrada, args));
			else if(*entrada == '%')
				i = i + ft_putchar('%');

		}
		else 
			i = i + ft_putchar(*entrada);
		entrada++;
	}	 
	va_end(args);
	return (i);
}


int main(void)
{
	// char a;

	

	//printf("RESULT PRINTF <%d>\n", printf("asdf%c %s\n", 'c', "ANA"));
	//printf("RESULT FT_PRINTF <%d>\n", ft_printf("asdf%c %s\n", 'c', "ANA"));
	ft_printf("result <%u>\n", -100);
	printf("result original <%u>\n", -1);

	return (0);
}