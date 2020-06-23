/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:29:53 by smyeki            #+#    #+#             */
/*   Updated: 2020/06/23 11:48:28 by smyeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
		return(0);
}
void ft_print_comb(void)
{
	int num1,num2,num3;
		num1='0';
		num2='1';
		num3='2';
		while(num1<='7')
		{
			while(num2<='8')
			{
				while(num3<='9')
				{
					if(num1<=num2 && num2<=num3)
					{
						ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				ft_putchar(',');
				ft_putchar(' ');
					}
					num3++;
				}
				num3='0';
				
				num2++;
			}
			num2='0';
			num1++;
		}
	num1='0';	
}


