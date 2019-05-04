/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:20:57 by chyuen            #+#    #+#             */
/*   Updated: 2019/04/29 19:56:16 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (*str)
		ret[i++] = *(str++);
	ret[i] = 0;
	return (ret);
}
