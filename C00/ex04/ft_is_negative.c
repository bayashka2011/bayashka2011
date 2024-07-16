/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:23:27 by bazhigal          #+#    #+#             */
/*   Updated: 2024/06/27 17:23:06 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
	{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{	
		write (1, "P", 1);
	}
}