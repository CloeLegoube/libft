/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <clegoube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:04:52 by clegoube          #+#    #+#             */
/*   Updated: 2016/11/08 15:15:03 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (*(char *)(s1 + i) == '\0' && *(char *)(s2 + i) != '\0')
		return (0);
	if (*(char *)(s2 + i) == '\0' && *(char *)(s1 + i) != '\0')
		return (0);
	if (*(char *)(s1 + i) == '\0' && *(char *)(s2 + i) == '\0')
		return (1);
	while (*(char *)(s1 + i) && *(char *)(s1 + i) == *(char *)(s2 + i))
	{
		if (*(char *)(s1 + i + 1) == '\0')
			return (1);
		i++;
	}
	return (0);
}
