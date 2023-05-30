/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:52:23 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/02/19 18:50:35 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int		px;
	int		py;

	px = 1;
	py = 1;
	while (py <= y && y > 0 && x > 0)
	{
		while (px <= x)
		{
			if ((px == 1 && py == 1) || (px == x && py == 1))
				ft_putchar('A');
			else if ((px == x && py == y) || (px == 1 && py == y))
				ft_putchar('C');
			else if ((px > 1 && px < x) && (py == 1 || py == y))
				ft_putchar('B');
			else if (((px == 1) || (px == x)) && py > 1 && py < y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			px++;
		}
		px = 1;
		py++;
		ft_putchar('\n');
	}
}
