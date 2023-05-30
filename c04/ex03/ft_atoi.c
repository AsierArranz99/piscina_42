/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:59:10 by aarranz-          #+#    #+#             */
/*   Updated: 2023/03/09 12:22:21 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_return_negatives(char *str)
{
	int	neg;
	int	i;

	i = 0;
	neg = 1;
	while (*(str + i))
	{
		if (*(str + i) == '-')
			neg = neg * -1;
		i++;
	}
	return (neg);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (*(str + i) == ' ')
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) != '\0' && *(str + i) <= '9' && *(str + i) >= '0')
	{
		n = n * 10 + (*(str + i) - 48);
		i++;
	}
	n = n * ft_return_negatives(str);
	return (n);
}
