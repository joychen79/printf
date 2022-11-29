/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:27 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/29 18:47:14 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<unistd.h>
//#include<stdio.h>

static int	ft_nbrsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size ++;
	while (n != 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}

int	ft_putnbr(int n)
{
	int	len;

	len = ft_nbrsize(n);
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr((n / 10));
		ft_putchar((n % 10) + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	return (len);
}

/*int main()
{
	int i = -2147483648;
	int n = -1;
	int count;
	count = ft_putnbr(n);
	printf("\n%d", count);
	return 0;
}*/