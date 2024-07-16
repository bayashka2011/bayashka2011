/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:26:31 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/01 15:52:18 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int main (void)
{
	int x,y, div, mod;
	x = 50;
	y = 20;
	ft_div_mod(x, y, &div, &mod);
	printf("\n%d/%d = %d remainder %d\n\n", x ,y , divide, mod);
        return(0);
}
*/
