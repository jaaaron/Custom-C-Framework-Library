/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:55:12 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 21:32:15 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** test for an ASCII character
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}
/*
** int main()
**  {
**    int var1='J';
**    int var2='7';
**    int var3='\t';
**    int var4=' ';
**    int var5='a';
**  if (ft_isascii(var1))
**  {
**      printf("var1 '%c'  = |%c| is an ascii character\n",var1,var1);
**  } else {
**      printf("var1 '%c'  = |%c| is not an ascii character\n",var1,var1);
**  }
**  if (ft_isascii(var2))
**  {
**      printf("var2 '%c'  = |%c| is an ascii character\n",var2,var2);
**  } else {
**      printf("var2 '%c'  = |%c| is not an ascii character\n",var2,var2);
**  }
**  if (ft_isascii(var3))
**  {
**      printf("var3 '\\t' = |%c| is an ascii character\n",var3,var3);
**  } else {
**      printf("var3 '\\t' = |%c| is not an ascii character\n",var3,var3);
**  }
**  if (ft_isascii(var4))
**  {
**      printf("var4 '%c'  = |%c| is an ascii character\n",var4,var4);
**  } else {
**      printf("var4 '%c'  = |%c| is not an ascii character\n",var4,var4);
**  }
**  if (ft_isascii(var5))
**  {
**      printf("var5 '%c'  = |%c| is an ascii character\n",var5,var5);
**  } else {
**      printf("var5 '%c'  = |%c| is not an ascii character\n",var5,var5);
**  }
**  return (0);
** }
*/
