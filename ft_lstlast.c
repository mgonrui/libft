#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *lst_i;
	if (lst == NULL)
		return (NULL);
	lst_i = lst;
	while (lst_i->next != NULL)
	{
		lst_i = lst_i->next;
	}
	return lst_i;
}

// #include <stdio.h>

// t_list *ft_lstnew2(int content)
// {
// 	t_list *new;
// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (new == NULL)
// 		return NULL;
// 	new->content = content;
// 	new->next = NULL;
// 	return new;
// }
// int main(void)
// {
// 	int i = 0;
// 	t_list *root;
// 	t_list *current;
// 	root = ft_lstnew2(7);
// 	current = ft_lstnew2(8);
// 	root->next = current;
// 	t_list *result = ft_lstlast(root);
// 	printf("%d\n", result->content);
// 	return 0;
// }


