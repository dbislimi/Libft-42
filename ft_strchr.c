/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 11:13:57 by dbislimi          #+#    #+#             */
/*   Updated: 2024-04-22 11:13:57 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

/*
int main(void)
{
	printf("%s", ft_strchr("teste", 'e'));
}*/