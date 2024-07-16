/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:34:34 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/11 19:01:17 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 1;
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	else if (index > 1)
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
