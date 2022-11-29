/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/29 18:45:49 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<unistd.h>
//#include<stdio.h>

int	ft_puthexlower(unsigned int n)
{
	static int	count;

	count = 0;
	if (n >= 16)
	{
		ft_puthexlower(n / 16);
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
	int count = ft_puthexlower(i);
	printf("\n%d\n", count);
	return (0);
}*/