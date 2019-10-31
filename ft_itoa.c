/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 23:20:52 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/23 16:41:23 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_intlen(int n)
{
	unsigned long i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	char	*ft_itostr(char *dst, unsigned int n, size_t start, size_t len)
{
	dst[len - 1] = '\0';
	len--;
	while (len > start)
	{
		dst[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (dst);
}

char			*ft_itoa(int n)
{
	char				*string_integer;
	int					sign;
	unsigned int		result;
	unsigned long		i;
	unsigned long		j;

	sign = 0;
	j = 0;
	i = ft_intlen(n);
	if (n < 0)
	{
		sign = 1;
		result = -((unsigned int)n);
	}
	else
		result = n;
	string_integer = (char *)malloc(i + sign + 1);
	if (string_integer == NULL)
		return (NULL);
	if (sign)
	{
		string_integer[j] = '-';
		j++;
	}
	return (ft_itostr(string_integer, result, j, i + sign + 1));
}
