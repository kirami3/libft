/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:50:45 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:50:46 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;
	char	*str;
	int		j;

	j = 0;
	i = (char)c;
	str = (char *)s;
	while (str[j])
		j++;
	while (j > -1)
	{
		if (str[j] == i)
			return (&str[j]);
		j--;
	}
	return (NULL);
}
