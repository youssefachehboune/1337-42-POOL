/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:18:19 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/05 08:32:55 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		m = nb % i;
		if (m == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
