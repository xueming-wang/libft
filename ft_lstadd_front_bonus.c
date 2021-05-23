/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:41:34 by xuwang            #+#    #+#             */
/*   Updated: 2021/05/23 17:31:00 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
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
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}
int main()
{
	t_list *list1 = ft_lstnew("123");
	t_list *list2 = ft_lstnew("abc");
	 list1->next = list2;
	t_list *new = ft_lstnew("789");
	ft_lstadd_front(&list1, new);
	printf ("%s", list1->content);
	free(list1);
	return (0);
}
