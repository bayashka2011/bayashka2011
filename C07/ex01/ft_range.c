/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:02:11 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/16 13:39:45 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (0);
	result = (int *) malloc((max - min) * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
