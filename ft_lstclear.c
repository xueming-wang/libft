/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:07:13 by xuwang            #+#    #+#             */
/*   Updated: 2021/05/22 22:21:40 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
    
   	tmp = NULL;
	while (*lst)
    	{
        	tmp = (*lst)->next;
        	ft_lstdelone(*lst, del);
        	*lst = tmp;
    	}
    	*lst = NULL;
}
