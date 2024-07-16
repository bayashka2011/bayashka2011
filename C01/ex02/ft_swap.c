/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazhigal <bazhigal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:35:02 by bazhigal          #+#    #+#             */
/*   Updated: 2024/07/01 17:16:10 by bazhigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
/*
#include <stdio.h>
int    main(void)
{
    int x, y;
    x = 42;
    y = 21;
    printf("before\n %d %d\n",x, y);
        ft_swap(&x,&y);
        printf("after\n %d %d\n",x, y);
        return(0);
}
*/
