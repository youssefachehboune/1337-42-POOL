/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:13:31 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/03 17:55:13 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	i;

	i = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
