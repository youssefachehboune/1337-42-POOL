/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:58:52 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/25 19:00:43 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (str[i] != '\0')
	{
		number++;
		i++;
	}
	return (number);
}