/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/26 20:02:55 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<unistd.h>
//#include<stdio.h>

int	ft_putptr(unsigned long n)
{
	static int	count;

	count = 2;
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
		count++;
	}
	else
	{
		ft_putchar("0123456789abcdef"[n % 16]);
		count++;
	}
	return (count);
}

/*int	main ()
{
	unsigned long i = 32055888044554444;
	//ft_putptr(i);
	int count = ft_putptr(i);
	printf("\n%d\n", count);
	return (0);
}*/