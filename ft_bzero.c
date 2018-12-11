/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 10:24:26 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/23 19:10:42 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** writes 'n' zeroed bytes to the string 's' else returns nothing
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
** #include <stdio.h>
**
** int main(int argc, char**argv)
** {
**	int i;
**	int arr[5];
**	ft_bzero(arr, 5 * sizeof(int) );
**	for (i = 0; i < 5; i++)
**	{
**		printf("%i = %i\n",i,arr[i]);
**	}
** }
*/
