/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:41:59 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/02/19 18:47:59 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int		px;
	int		py;

	px = 1;
	py = 1;
	while (py <= y && y > 0 && x > 0)
	{
		while (px <= x)
		{
			if ((px == 1 && py == 1) || (px == 1 && py == y))
				ft_putchar('o');
			else if ((px == x && py == 1) || (px == x && py == y))
				ft_putchar('o');
			else if ((px > 1 && px < x) && (py == 1 || py == y))
				ft_putchar('-');
			else if (((px == 1) || (px == x)) && py > 1 && py < y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			px++;
		}
		px = 1;
		py++;
		ft_putchar('\n');
	}
}
