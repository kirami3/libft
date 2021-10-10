/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:50:33 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:50:35 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *gde, const char *chto, size_t n)
{
	size_t	i;
	size_t	t;
	size_t	j;

	i = n;
	j = 0;
	if (!*chto)
		return ((char *)gde);
	while (gde[j] && n--)
	{
		t = 0;
		if (gde[j] == chto[t])
		{
			while (chto[t] && gde[j + t] == chto[t] && j + t < i)
				t++;
			if (chto[t] == '\0')
				return ((char *)gde + j);
		}
		j++;
	}
	return (0);
}
