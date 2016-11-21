/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <clegoube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:25:52 by clegoube          #+#    #+#             */
/*   Updated: 2016/11/09 16:43:38 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_special_char(char chaine, char charset)
{
	if (chaine == charset)
			return (1);
	return (0);
}

int		ft_malloc_by_word(char *str, char charset)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine], charset) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1], charset)
				|| !str[chaine + 1])
				++mot;
		}
		chaine++;
	}
	return (++mot);
}

void	ft_malloc_by_letter(char **tab, char *str, char charset)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine], charset) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1], charset)
				|| !str[chaine + 1])
			{
				tab[mot++] = (char*)malloc((lettre + 1) * sizeof(char));
				lettre = 0;
			}
		}
		lettre++;
		chaine++;
	}
	tab[mot] = (char*)malloc((lettre + 1) * sizeof(char));
}

char		**ft_strsplit(char const *str, char charset)
{
	char	**tab;
	int		chaine;
	int		mot;
	int		lettre;

	tab = (char**)malloc(ft_malloc_by_word((char *)str, charset) * sizeof(char*));
	if (tab == NULL)
		return (NULL);
	ft_malloc_by_letter(tab, (char *)str, charset);
	chaine = -1;
	mot = 0;
	lettre = 0;
	while (*(char *)(str + ++chaine))
	{
		if (!ft_check_special_char(*(char *)(str + chaine), charset) && *(char *)(str + chaine))
		{
			tab[mot][lettre++] = *(char *)(str + chaine);
			if (ft_check_special_char(*(char *)(str + chaine + 1), charset)
				|| !*(char *)(str + chaine + 1))
			{
				tab[mot++][lettre] = '\0';
				lettre = 0;
			}
		}
	}
	tab[mot] = 0;
	return (tab);
}
