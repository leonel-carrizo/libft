/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:11:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:13 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	while (big && len >= len_little)
	{
		if (*big == *little && ft_strncmp(big, little, len_little) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

//int	main(void)
//{
//	const char *large = "Foo Bar Baz";
//	const char *small = "Baz";
//	char	*ptr;
//
//	ptr = ft_strnstr(large, small, ft_strlen(small));
//	printf("This is FT: %s\n", ptr);
//	printf("This is C: %s\n", strnstr(large, small, ft_strlen(small)));
//	return (0);
//}

//DESCRIPTION
//The  strnstr()  function  locates the first occurrence of the null-termi‐
//nated string little in the string big, where not more than len characters
//are searched.  Characters that appear after  a  ‘\0’  character  are  not
//searched.   Since  the  strnstr()  function is a FreeBSD specific API, it
//should only be used when portability is not a concern.
//
//RETURN VALUES
//If little is an empty string, big is returned; if little  occurs  nowhere
//in  big,  NULL is returned; otherwise a pointer to the first character of
//the first occurrence of little is returned.
