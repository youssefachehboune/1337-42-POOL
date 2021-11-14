/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:51:29 by yachehbo          #+#    #+#             */
/*   Updated: 2021/10/14 16:35:52 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_char(char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	nomber_of_str(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_char(charset, str[i]) == 0)
			i++;
		while (is_char(charset, str[i]) == 1)
			i++;
		count++;
	}
	return (count);
}

int	word_counter(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && is_char(charset,*str) == 0)
	{
		count++;
		str++;
	}
	return (count);
}

char	*create_word(char *str, char *charset, char **word)
{
	int	wcount;
	int	j;

	wcount = word_counter(str, charset);
	*word = malloc(sizeof(char) * (wcount + 1));
	(*word)[wcount] = 0;
	j = 0;
	while (j < wcount)
		(*word)[j++] = *str++;
	while (is_char(charset, *str) == 1)
		str++;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		spcount;
	int		i;

	while (is_char(charset, *str) == 1)
		str++;
	spcount = nomber_of_str(str, charset);
	result = malloc(sizeof(char *) * (spcount + 1));
	if (!result)
		return (0);
	result[spcount] = 0;
	i = 0;
	while (i < spcount)
	{
		str = create_word(str, charset, result + i);
		i++;
	}
	return (result);
}
