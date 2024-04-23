/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 11:14:10 by dbislimi          #+#    #+#             */
/*   Updated: 2024-04-22 11:14:10 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1len;
	size_t	s2len;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!joined)
		return (0);
	*joined = 0;
	if (!joined)
		return (NULL);
	ft_strlcat(joined, s1, s1len + 1);
	ft_strlcat(joined, s2, s1len + s2len + 1);
	return (joined);
}
/*
int main(void)
{
	printf("%s", ft_strjoin("bonjour,", " aurevoir"));
}*/