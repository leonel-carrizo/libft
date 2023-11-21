/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:51:18 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/17 15:41:51 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	ptr = new_str;
	if (new_str != NULL)
	{
		while (len)
		{
			while (*s1)
			{
				*new_str++ = *s1++;
				len--;
			}
			*new_str++ = *s2++;
			len--;
		}
		*new_str = '\0';
	}
	return (ptr);
}

//int	main(void)
//{
//	const char	*pref;
//	const char	*suff;
//	char		*joined;
//
//	pref = "Hola ";
//	suff = "Que pasa";
//	joined = ft_strjoin(pref, suff);
//	printf("Joined: %s\n", joined);
//	free(joined);
//	return (0);
//}
