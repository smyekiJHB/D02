/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:08:55 by smyeki            #+#    #+#             */
/*   Updated: 2020/06/19 13:40:30 by smyeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar (char c)
{
	write (1 ,&c, 1);
		return (0);
}
void ft_print_reverse_alphabet (void)
{
	char a ='z';
		while (a>='a')
		{ft_putchar (a);
			a--;
		}
}
