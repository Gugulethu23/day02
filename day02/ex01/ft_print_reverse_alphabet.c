/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:32:41 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/24 14:50:15 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar (char c)
{
	write(1,&c,1);

}
void ft_print_reverse_alphabet(void)
{
	char letter; 
	letter = 'z';
	  while (letter >= 'a'){
		  ft_putchar(letter);
		  letter--;
	  }
}




