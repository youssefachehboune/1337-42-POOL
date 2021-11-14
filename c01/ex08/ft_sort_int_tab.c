/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:25:40 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/25 19:18:25 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	temp;

	temp = 0;
	while (temp < size)
	{
		if (tab[temp] > tab[temp + 1])
		{
			swap = tab[temp];
			tab[temp] = tab[temp + 1];
			tab[temp + 1] = swap;
			temp = 0;
		}
		else
		{
			temp++;
		}
	}
}
