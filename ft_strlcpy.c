/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:50:00 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:50:01 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	int	j;

	if (!dst || !src)
		return (0);
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	size -= 1;
	while (src[j] && size > 0)
	{
		dst[j] = src[j];
		size--;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}
