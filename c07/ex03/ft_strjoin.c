/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:54:28 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/11 21:04:02 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	count_join(int size, char **strs, char *sep)
{
	int		len;
	int		sep_len;
	int		i;
	int		j;

	len = 0;
	sep_len = 0;
	i = 0;
	while (sep[sep_len] != '\0')
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		if (i != size - 1)
			len = len + sep_len;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	char	*tab;

	i = 0;
	len = count_join(size, strs, sep) + 1;
	tab = malloc(sizeof(char) * len);
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[len++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
				tab[len++] = sep[j++];
		}
		i++;
	}
	tab[len] = '\0';
	return (tab);
}
