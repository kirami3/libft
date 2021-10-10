/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:49:52 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:49:54 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < dsize)
		i++;
	while (src[j] && (i + j + 1) < dsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < dsize)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
