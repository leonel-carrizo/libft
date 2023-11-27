/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:14:13 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/27 19:10:14 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	num_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		while (*s == c)
			s++;
	}
	return (count);
}

static void	memfree(size_t i, char **array)
{
	while (i)
	{
		free(array[i]);
		i--;
	}
	array = NULL;
	free(array);
}

static size_t	substr_len(const char *substr, char c)
{
	size_t	i;

	i = 0;
	while (*substr && *substr != c)
	{
		i++;
		substr++;
	}
	return (i);
}

static char	**get_substr(const char *str, char **array, char c, size_t nsub)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < nsub)
	{
		while (str[j] != '\0' && str[j] == c)
			j++;
		array[i] = ft_substr(str, j, substr_len(&str[j], c));
		if (!array[i])
		{
			memfree(i, array);
			return (NULL);
		}
		while (str[j] && str [j] != c)
			j++;
		i++;
		j++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num_substr;

	if (!*s)
		return (NULL);
	num_substr = num_words(s, c);
	array = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if (!array)
		return (NULL);
	array = get_substr(s, array, c, num_substr);
	return (array);
}

//int	main(void)
//{
//	const char	*str;
//	char		**matriz;
//	size_t		i;
//
//	str = "---Hola---como-esta-todo-kbsklsbklcsdb-----   ---- ";
//	matriz = ft_split(str, '-');
//	i = 0;
//	while (matriz[i] != (void *)0)
//	{
//		printf("%s\n", matriz[i]);
//		i++;
//	}
//	free(matriz);
//	return (0);
//}

//las SubCadenas estan definidas a partir del caracter dado `c`.
//se excluye el caracyter dado `c`.
//calcular el numero de SubCadenas en la cadena principal `s`
//obtener el largo de cada SubCadena.
//dividir la cadena principal segun los datos obtenidos. 
//alojar dinamicamente las SubCadenas incluyendo el NULL caracter
//si el alojamiento de memoria falla, se debe liberar la memoria 
//y retornar null.
//cada SubCadena debe terminar con sun NULL.
//
