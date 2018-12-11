/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:52:13 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/06 20:39:26 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function writes len bytes of value c (converted to an
**   unsigned char) to the string b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (b);
}
/*
** #include <stdio.h>
**
** int main(int argc, char**argv)
** {
**	int i;
**	char arr[5]="hello";
**	ft_memset (arr,0,5);
**	for (i = 0; i < 5; i++)
**	{
**		printf("%i = %i\n",i,arr[i]);
**	}
** }
*/
