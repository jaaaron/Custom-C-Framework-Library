/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:48:31 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/06 16:51:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2 up to n char- acters or until
** a ’\0’ is reached. If the 2 strings are identical, the function returns 1,
** or 0 otherwise.
** Param #1 - The first string to be compared.
** Param #2 - The second string to be compared.
** Param #3 - The maximum number o f characters to be compared
** Return Value - 1 or 0 on condition if the 2 strings being identical or not
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}
