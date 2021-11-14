/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:49:06 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/26 16:29:40 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, char c1, char c2, char c3)
{
	ft_putchar(c1);
	while ((x - 1) > 1)
	{
		ft_putchar(c2);
		x--;
	}
	if (x > 1)
		ft_putchar(c3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		print(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			print(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			print(x, 'C', 'B', 'A');
		}
	}
}
