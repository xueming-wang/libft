/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:46:46 by xuwang            #+#    #+#             */
/*   Updated: 2021/05/23 18:01:23 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}
int main()
{
	t_list *l1 = ft_lstnew("1");
	t_list *l2 = ft_lstnew("1");
	t_list *l3 = ft_lstnew("1");
	l1->next = l2;
	l2->next = l3;
int i=ft_lstsize(l1);
	printf ("%d", i);
	return 0;
}
