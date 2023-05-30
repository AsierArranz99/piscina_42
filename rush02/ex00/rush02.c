/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:25:28 by aarranz-          #+#    #+#             */
/*   Updated: 2023/03/05 17:16:47 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:25:28 by aarranz-          #+#    #+#             */
/*   Updated: 2023/03/04 16:30:59 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	fd;
	int	t;
	int	i;
	int	h;
	char	str[352];
	char	d;

	if (argc == 2)
	{
		i = 0;
		fd = open ("./numbers.dict", O_RDONLY);
		t = read (fd, str, 352);
		while (i < 352)
		{
			if (str[i] == argv[1][h])
			{
				while (d != '\n')
				{
					d = str[i + 4];
					write (1, &d, 1);
					i++;
				}
				h++;
			}
		i++;
		}
	}
	return (0);
}
