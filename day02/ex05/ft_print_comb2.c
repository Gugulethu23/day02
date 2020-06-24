/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:33:48 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/24 15:00:28 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb2()
{
	int i;
	int j;
	
	i = 0;

	while (i < 99)
	{
		j = i + 1; 
		while (j <= 99)
		{
			ft_putchar(i/10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(j % 10 + '0');
			ft_putchar(',');
			ft_putchar(' ');

			j++;
		}
		i=i+1;
	}
}

