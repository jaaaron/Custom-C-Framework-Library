/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:01:00 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/31 22:48:32 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** test for any character in the alphabet in either lower or uppercase
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
** #include <stdio.h>
** int main()
** {
**	int var1='J';
**	int var2='7';
**	int var3='\t';
**	int var4=' ';
**	int var5='a';
**
**	if (ft_isalpha(var1))
**	{
**		printf("var1 '%c'  = |%c| is an alphabet\n",var1,var1);
**	} else {
**		printf("var1 '%c'  = |%c| is not an alphabet\n",var1,var1);
**	}
**	if (ft_isalpha(var2))
**	{
**		printf("var2 '%c'  = |%c| is an alphabet\n",var2,var2);
**	} else {
**		printf("var2 '%c'  = |%c| is not an alphabet\n",var2,var2);
**	}
**	if (ft_isalpha(var3))
**	{
**		printf("var3 '\\t' = |%c| is an alphabet\n",var3,var3);
**	} else {
**		printf("var3 '\\t' = |%c| is not an alphabet\n",var3,var3);
**	}
**	if (ft_isalpha(var4))
**	{
**		printf("var4 '%c'  = |%c| is an alphabet\n",var4,var4);
**	} else {
**		printf("var4 '%c'  = |%c| is not an alphabet\n",var4,var4);
**	}
**	if (ft_isalpha(var5))
**	{
**		printf("var5 '%c'  = |%c| is an alphabet\n",var5,var5);
**	} else {
**		printf("var5 '%c'  = |%c| is not an alphabet\n",var5,var5);
**	}
**	return (0);
** }
*/
