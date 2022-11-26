/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:27 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/26 18:11:04 by jingchen         ###   ########.fr       */
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

int	ft_putnbr(long int n)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr((n / 10));
		ft_putchar((n % 10) + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	return (ft_nbrsize (n));
}

/*int main()
{
	int i = -2147483648;
	int n = -122;
	int count;
	 count = ft_putnbr(i);
	printf("\n%d", count);
	return 0;
}*/