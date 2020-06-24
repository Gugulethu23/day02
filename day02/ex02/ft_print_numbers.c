/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:48:54 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/24 14:53:00 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar (char c)
{

	write(1,&c,1);

}
void ft_print_numbers()
{
	char number;
   number = '0';
		while (number <= '9'){
			ft_putchar (number);
			number++;
        }
}

