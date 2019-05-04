/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:20:27 by chyuen            #+#    #+#             */
/*   Updated: 2019/05/02 21:57:09 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	while (*s1 && ret)
		ret[i++] = *s1++;
	while (*s2 && ret)
		ret[i++] = *s2++;
	return (ret);
}
