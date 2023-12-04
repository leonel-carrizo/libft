/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:12:14 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/30 17:18:39 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

//int	main(void)
//{
//	char	x[] = "hola Mundo";
//	int		y = '\0';
//
//	printf("This is ft: --%s--\n", ft_strchr(x, y));
//	printf("This is C: -%s-\n", strchr(x, y));
//	return (0);
//}

//DESCRIPTION
//The  strchr()  function  returns a pointer to the first occurrence 
//of the character c in the string s.
//RETURN VALUE
//The strchr() and strrchr() functions return  a  pointer  to  the  matched
//character  or  NULL  if the character is not found.  
//The terminating null byte is considered part of the string, 
//so that if c is specified as '\0',
//these functions return a pointer to the terminator.
