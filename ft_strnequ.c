/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <clegoube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:14:49 by clegoube          #+#    #+#             */
/*   Updated: 2016/11/08 15:18:26 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (*(char *)(s1 + i) == '\0' && *(char *)(s2 + i) != '\0')
		return (0);
	if (*(char *)(s2 + i) == '\0' && *(char *)(s1 + i) != '\0')
		return (0);
	if (*(char *)(s1 + i) == '\0' && *(char *)(s2 + i) == '\0')
		return (1);
	while (*(char *)(s1 + i) &&
				*(char *)(s1 + i) == *(char *)(s2 + i) &&
				i < n)
	{
		if (*(char *)(s1 + i + 1) == '\0')
			return (1);
		i++;
	}
	return (0);
}
