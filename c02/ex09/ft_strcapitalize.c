/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:13:26 by yachehbo          #+#    #+#             */
/*   Updated: 2021/09/27 09:27:31 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphanumeric(str[i]) == 1)
		{
			if ((first == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			else if ((first == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}
