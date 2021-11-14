/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 08:06:41 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/03 09:16:24 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char *av[])
{
	 int	i;
	 int	j;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	j = 1;
	ft_sort(ac, av);
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
