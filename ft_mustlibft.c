/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustlibft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:29:56 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/06 17:02:14 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
size_t	ft_strlen(const char *c)
{
	size_t	count;	

	count = 0;
	while (c [count])
		count++;
	return (count);
}
int	ft_putstr(char *s)
{
	int len;

	len = 0;
	while(s[len])
	{
		if (write(1, &s[len], 1) == -1)
			return (-1);
		len++;
	}
	return (len);
	//return (write (1, s, ft_strlen(s)));
	
}
int	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		if (write (fd, "-2147483648", 11) == -1)
			return (-1);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd ('-', fd);
			n = n * -1;
		}
		if (n >= 0 && n <= 9)
			ft_putchar_fd (n + '0', fd);
		if (n > 9)
		{
			ft_putnbr_fd ((n / 10), fd);
			ft_putnbr_fd ((n % 10), fd);
		}
	}
	
	return (n);
}

int	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);

	return (c);
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	tot;
	int	neg;

	tot = 0;
	neg = 1;
	while (ft_isspace(*str))
str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		neg = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		tot = tot * 10 + (*str - 48);
		str++;
	}
	return (tot * neg);
}

int	ft_putnbr_fdunsigned(unsigned int n, int fd)
{
	
		
		if (n >= 0 && n <= 9)
			ft_putchar_fd (n + '0', fd);
		if (n > 9)
		{
			ft_putnbr_fd ((n / 10), fd);
			ft_putnbr_fd ((n % 10), fd);
		}
	
	//printf("%u\n", n);
	return (n);
}
int	ft_putnbr_fdunsignedhex(unsigned int n, int fd)
{
	char *base;

	base = "0123456789abcdef";	
		
	//	if (n >= 0 && n <= 9)
		if  (n >= 16)
		{
			ft_putnbr_fdunsignedhex ((n / 16), fd);
					
			//ft_putnbr_fd ((n % 16), fd);
		}
			 
				// write (fd, &base[n/16],1);	
				write (fd, &base[n%16],1);
			
	//printf("%u\n", n);
	return (n);
}

int	ft_putnbr_fdunsignedhexcap(unsigned int n, int fd)
{
	char *base;

	base = "0123456789ABCDEF";	
		
	//	if (n >= 0 && n <= 9)
		if  (n >= 16)
		{
			ft_putnbr_fdunsignedhexcap ((n / 16), fd);
					
			//ft_putnbr_fd ((n % 16), fd);
		}
			 
				// write (fd, &base[n/16],1);	
				write (fd, &base[n%16],1);
			
	//printf("%u\n", n);
	return (n);
}



