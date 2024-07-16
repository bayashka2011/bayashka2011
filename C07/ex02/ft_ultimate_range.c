/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:41:25 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/16 15:41:36 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
	{
		result = NULL;
		return (0);
	}
	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (-1);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	*range = result;
	return (i);
}
