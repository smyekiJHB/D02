/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:39:19 by smyeki            #+#    #+#             */
/*   Updated: 2020/06/19 10:46:13 by smyeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_alphabet(void)
{
	char a = 'a';
	while(a<='z')
	{ ft_putchar(a);
		a++;
 }
}
