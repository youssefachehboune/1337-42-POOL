/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 07:25:17 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/23 08:00:43 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabe;

	alphabe = 'z';
	while (alphabe >= 'a')
	{
		write(1, &alphabe, 1);
		alphabe--;
	}
}
