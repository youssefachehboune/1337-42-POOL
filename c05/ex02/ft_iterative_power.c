/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:10:01 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/03 18:30:03 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
