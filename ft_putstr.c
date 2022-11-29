/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:10:06 by jingchen          #+#    #+#             */
/*   Updated: 2022/11/29 17:27:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include<stdio.h>
//#include<unistd.h>
int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		write(1, s++, 1);
		count++;
	}
	return (count);
}

/*int main()
{
	char str[] = "hola mundo";
	int size = ft_putstr(str);
	printf("%d", size);
}*/