/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:57:42 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/05 00:04:28 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str_cpy;

	str_cpy = (char *)malloc(ft_strlen(s1) + 1);
	if (str_cpy == NULL)
		return (NULL);
	ft_strcpy(str_cpy, s1);
	return (str_cpy);
}
