/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:16:06 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/01 19:38:42 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			return ((void*)(&((char *)dst)[i + 1]));
		}
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (NULL);
}
