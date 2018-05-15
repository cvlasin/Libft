/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:01:41 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 22:18:47 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sir;

	if (!s1 || !s2)
		return (NULL);
	if (!(sir = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		sir[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sir[i + j] = s2[j];
		j++;
	}
	sir[i + j] = '\0';
	return (sir);
}
