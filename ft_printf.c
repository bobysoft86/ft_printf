/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:50:08 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/02 16:08:22 by roberodr         ###   ########.fr       */
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
		i = i + ft_putstr((char *) va_arg(args, void *));
	if (entrada == 'd')
		i = i + ft_printbase((char) va_arg(args, int));
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
	ft_printf("result <%d>\n", 214748364);
	printf("result original <%d>\n", -2147483648);

	return (0);
}