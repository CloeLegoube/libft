/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <clegoube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:21:28 by clegoube          #+#    #+#             */
/*   Updated: 2016/11/14 12:30:10 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*troncon;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	troncon = (char *)malloc((len + 1) * sizeof(*troncon));
	if (troncon == NULL)
		return (NULL);
	while (*(char *)(s + i) && i < len)
	{
		troncon[i] = *(char *)(s + start + i);
		i++;
	}
	troncon[i] = '\0';
	return (troncon);
}
