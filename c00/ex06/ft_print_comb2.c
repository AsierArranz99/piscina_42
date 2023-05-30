/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:20:09 by aarranz-          #+#    #+#             */
/*   Updated: 2023/02/22 18:24:03 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d);
void	contar(char a, char b, char c, char d);

void	ft_putchar(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, ", ", 2);
}

void	contar(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if (((a * 10) + b) < ((c * 10) + d))
			{
				ft_putchar(a, b, c, d);
			}
		d++;
		}
	c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	d = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			contar(a, b, c, d);
			b++;
		}
		a++;
	}
	write (1, "\b\b", 2);
}
