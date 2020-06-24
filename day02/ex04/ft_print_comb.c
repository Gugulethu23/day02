/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:23:53 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/24 14:59:07 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb()
{
	int a;
	int b;
	int c;
	 
	a = '0';
	while (a <= '7')
	{
		b = a + 1; 
		while (b <= '8')
		{
			c = a + 1; 
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
					ft_putchar(' ');
				c = c + 1;

			}
			b = b + 1;
		}
		a = a + 1;
	}

