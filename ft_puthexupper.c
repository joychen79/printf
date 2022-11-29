/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/29 18:51:14 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<unistd.h>
//#include<stdio.h>

int	ft_puthexupper(unsigned int n)
{
	static int	count;

	count = 0;
	if (n >= 16)
	{
		ft_puthexupper(n / 16);
		ft_putchar("0123456789ABCDEF"[n % 16]);
		count++;
	}
	else
	{
		ft_putchar("0123456789ABCDEF"[n % 16]);
		count++;
	}
	return (count);
}

/*int	main ()
{
	unsigned long i = 32055888044554444;
	int count = ft_puthexupper(i);
	printf("\n%d\n", count);
	return (0);
}*/