/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:49:27 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:49:28 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;
	int		j;
	char	*str;

	i = (char)c;
	j = 0;
	str = (char *)s;
	while (str[j])
	{
		if (str[j] == i)
			return (&str[j]);
		j++;
	}
	if (str[j] == i)
		return (&str[j]);
	return (NULL);
}
