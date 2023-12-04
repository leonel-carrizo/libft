/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:11:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/01 17:10:00 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_substr(const char *big, const char *little, size_t len)
{
	char	*result;
	char	*slittle;
	int		sub_len;

	while (*big)
	{
		while (*big && *big != *little && len--)
			big++;
		result = (char *)big;
		slittle = (char *)little;
		sub_len = len;
		while (*slittle == *result && sub_len)
		{
			result++;
			slittle++;
			sub_len--;
		}
		if (*slittle == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	char	*ptr;

	if (!big && !len)
		return (NULL);
	llen = ft_strlen(little);
	if (little == NULL || llen <= 0)
		return ((char *)big);
	if (llen > len)
		return (NULL);
	ptr = check_substr(big, little, len);
	if (ptr)
		return (ptr);
	return (NULL);
}

//int	main(void)
//{
//	//const char large[] = "Foo Bar Baz";
//	//const char small[] = "Baz";
//	//char	*ptr;
////	char *empty = (char*)"";
//	char haystack[30] = "aaabcabcd";
////	char needle[10] = "aabc";
//
//	//ptr = ft_strnstr(large, small, 11);
//	printf("This is FT: %s\n", ft_strnstr(haystack, "cd", 8));
//	printf("This is C: %s\n", strnstr(haystack, "cd", 8));
//	//printf("This is C: %s\n", strnstr(large, small, 11));
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
