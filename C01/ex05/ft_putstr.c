/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:00:24 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/01 17:02:26 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, &c, 1);
		str += 1;
	}
}
/*
int main (void)
{
char *C;
*C = "Test";
ft_putstr(C);
return (0);
}
*/
