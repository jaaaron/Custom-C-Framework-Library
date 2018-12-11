/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:40:11 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/03 09:54:38 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks if the passed character is alphanumeric
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
**	if (ft_isalnum(var1))
**	{
**		printf("var1 '%c'  = |%c| is   alphanumeric\n",var1,var1);
**	} else {
**		printf("var1 '%c'  = |%c| is not   alphanumeric\n",var1,var1);
**	}
**	if (ft_isalnum(var2))
**	{
**		printf("var2 '%c'  = |%c| is   alphanumeric\n",var2,var2);
**	} else {
**		printf("var2 '%c'  = |%c| is not   alphanumeric\n",var2,var2);
**	}
**	if (ft_isalnum(var3))
**	{
**		printf("var3 '\\t' = |%c| is   alphanumeric\n",var3,var3);
**	} else {
**		printf("var3 '\\t' = |%c| is not   alphanumeric\n",var3,var3);
**	}
**	if (ft_isalnum(var4))
**	{
**		printf("var4 '%c'  = |%c| is   alphanumeric\n",var4,var4);
**	} else {
**		printf("var4 '%c'  = |%c| is not   alphanumeric\n",var4,var4);
**	}
**	if (ft_isalnum(var5))
**	{
**		printf("var5 '%c'  = |%c| is   alphanumeric\n",var5,var5);
**	} else {
**		printf("var5 '%c'  = |%c| is not   alphanumeric\n",var5,var5);
**	}
**	return (0);
** }
*/
