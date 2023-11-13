/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:11:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/05 21:16:08 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);

	return (NULL);	
}

int	main(void)
{
	const char *large = "Foo Bar Baz";
	const char *small = "Bar";
	char	*ptr;

	ptr = ft_strnstr(large, small, 4);
	printf("This si FT: %s\n", ptr);
	printf("This is C: %s\n", ptr);
	return (0);
}

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

