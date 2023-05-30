/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:32:25 by madiez-p          #+#    #+#             */
/*   Updated: 2023/02/26 19:32:43 by madiez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int n, char **conds);

int		verify_params(int n, char **argv);

void	print_error(void);

char	**create_conds(int n, char *str);

int	main(int argc, char **argv)
{	
	int		dim;
	char	**conds;

	dim = verify_params(argc, argv);
	conds = create_conds(dim, argv[1]);
	if (!dim || argc != 2)
		print_error();
	else
		rush(dim, conds);
	return (0);
}
