/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:42:41 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/16 15:17:02 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (i < size - dest_len - 1 && src[i] != '\0')
		{
			dst[dest_len + i] = src[i];
			i++;
		}
		dst[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

//int	main(void)
//{
//	char	dest[20] = "Hola ";
//	const char *src = "Mundo";
//
//	char dest1[20] = "Hola ";
//	const char *src1 = "Mundo";
//
//	ft_strlcat(dest, src, sizeof(dest));
//	printf("This is FT: %s\n", dest);
//	printf("This is FT lenght: %ld\n\n", ft_strlcat(dest, src, sizeof(dest)));
//	
//	strlcat(dest1, src1, sizeof(dest1));
//	printf("This is C: %s\n", dest1);
//	printf("This is C lenght: %ld\n", strlcat(dest1, src1, sizeof(dest1)));
//
//	return (0);
//}

//Concatenate strings `src` in `dst` buffer.
//take the full size of buffer no just the lenght.
//garatee a NUL-terminate on the result as long as there is
//at least one byte free in `dst`.
//It shoud be included a byte free on `dst` for NUL-terminate.
//Only operate on true C. This means that `src` and `dst`
//must be NUL-terminated.
//append the `src` string with the '\0' at the end of `dst`.
//This means that: size - strlen(dst) - 1 
//This will result in a NUL-terminated string.
//RETURN VALUE
//strlcat return the total lenght of the string is trying to create.
//if `src` > `dst` (strlcat will no find the '\0') 
//the NUL won't be append and the lenght will be = size and `dst`
//won't be NUL-terminated (ther is not space for it)
