/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:38:18 by bazhigal          #+#    #+#             */
/*   Updated: 2024/06/27 17:02:15 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	int	a;

	a = 122;
	while (a >= 97)
	{
		write (1, &a, 1);
		a--;
	}	
}
