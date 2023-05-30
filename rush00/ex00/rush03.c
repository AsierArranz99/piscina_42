/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:28:05 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/02/19 18:40:44 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
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
				ft_putchar(65);
			else if ((px == x && py == 1) || (px == x && py == y))
				ft_putchar(67);
			else if ((px > 1 && px < x) && (py == 1 || py == y))
				ft_putchar(66);
			else if (((px == 1) || (px == x)) && py > 1 && py < y)
				ft_putchar(66);
			else
				ft_putchar(32);
			px++;
		}
		px = 1;
		py++;
		ft_putchar(10);
	}
}
