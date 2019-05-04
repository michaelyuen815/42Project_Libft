/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 23:20:27 by chyuen            #+#    #+#             */
/*   Updated: 2019/05/03 00:33:29 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_splitmain(char **ret, char const *s, char c, size_t len)
{
	size_t i;
	size_t i_st;
	size_t i_len;

	i = -1;
	i_st = 0;
	while (++i < len)
	{
		if (ft_strchr(s + i_st, c))
			i_len = ft_strchr(s + i_st, c) - s - i_st;
		else
			i_len = ft_strlen(s + i_st);
		if (!(ret[i] = ft_strsub(s, (unsigned int)i_st, i_len)))
			return (0);
		i_st += i_len;
		while (*(s + i_st) == c && *(s + i_st))
			i_st++;
	}
	ret[len] = 0;
	return (1);
}

static size_t	ft_ccount(char const *s, char c)
{
	size_t len;

	len = 1;
	while (*s++)
		len += ((*s != c && *(s - 1) == c && *s) ? 1 : 0);
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	len;
	char	**ret;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	len = (*s ? ft_ccount(s, c) : 0);
	if (!(ret = (char**)malloc((len + 1) * sizeof(char*))))
		return (NULL);
	if (!ft_splitmain(ret, s, c, len))
		ft_memdel((void**)ret);
	return (ret);
}
