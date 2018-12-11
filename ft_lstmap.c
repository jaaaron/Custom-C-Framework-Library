/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 08:39:49 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/13 10:43:22 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and applies the function f to each link to create a
** “fresh” list (using malloc(3)) resulting from the suc- cessive applications
** of f. If the allocation fails, the function returns NULL.
** Param #1 - A pointer’s to the first link of a list.
** Param #2 - The address of a function to apply to each link of a list.
** Return value - The new list.
** Libc functions - malloc(3), free(3).
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst && *f)
	{
		newlst = (*f)(lst);
		if (newlst && lst->next)
			newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (0);
}
