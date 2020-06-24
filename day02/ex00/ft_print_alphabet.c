/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:45:17 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/24 15:38:41 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar (char c)
{
    
	write(1,&c,1);
	
}
void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
		while (letter <= 'z'){
			ft_putchar (letter);
        	letter++;
        } 
}

