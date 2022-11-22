/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/18 20:04:20 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, "\\", 1);
			write (1, &"0123456789abcdef"[(unsigned char) str[i] / 16], 1);
			write (1, &"0123456789abcdef"[(unsigned char) str[i] % 16], 1);
		}
	i++;
	}
}

/*int	main ()
{
	char c[] = "Coucou\ntu vas ñ ¡ bien ?";

	ft_putstr_non_printable(c);
	return (0);
}*/
