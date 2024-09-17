#include "libft.h"
#include <stdlib.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *node;
	t_list **new_lst;
	new_lst = malloc(sizeof(t_list));
	if (lst == NULL || f == NULL)
		return NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
			del(node);
		ft_lstadd_back(new_lst, node);
		lst = lst->next;
	}
	return *new_lst;	
}