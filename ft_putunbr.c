/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:27 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/26 17:57:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<unistd.h>
//#include<stdio.h>

int	ft_putunbr(unsigned int n)
{
	static int	count;

	count = 0;
	if (n > 9)
	{
		ft_putunbr((n / 10));
		ft_putchar((n % 10) + '0');
		count++;
	}
	else
	{
		ft_putchar(n + '0');
		count = 1;
	}
	return (count);
}

/*int main()
{
	//int i = -2147483648;
	int n = 7;
	int count=ft_putunbr(n);
	printf("%d\n", count);
	return 0;
}*/