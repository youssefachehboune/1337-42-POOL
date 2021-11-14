/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:09:00 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/30 06:52:01 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	n2;
	unsigned int	n3;
	unsigned int	n0;

	i = 0;
	n = ft_strlen(dest);
	n2 = ft_strlen(src);
	n0 = size - n - 1;
	if (n >= size || !size)
	{
		n3 = n2 + size;
		return (n3);
	}
	else
		n3 = n + n2;
	while (src[i] != '\0' && i < n0)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (n + n2);
}
