/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:14:13 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/20 22:01:08 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	num_words(char *s, char c)
{
	size_t	count;

	while (*s)
	{
		if (*s != c)
		{
			count++;
			while ( *s && *s != c)
				s++;
		}
		while (*s == c)
			s++;
	}	
	return (count);
}

static size_t	substr_len(char *substr, char c)
{
	int	i;

	i = 0;
	while (*substr != c)
		i++;
	return(i);
}

static char **get_substr(const char *str, char **ptr, char c, size_t num_substr)
{
	char	*substr;
	
	while (i < num_substr)
	{
		while ()
		i++;
	}
	return (substr);
}

static void	memfree(*substr)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!*s)
		return (NULL;)
	return (0);
}

int	main(void)
{
	const char	*str;
	char	**matriz;
	int	i;

	str = "Hola,como,estas";
	matriz = ft_split(str, ',');
	i = 0;
	while(matriz[i] != '\0')
	{
		printf("%s", matriz[i]);
		i++;
	}
	return (0);
}

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
