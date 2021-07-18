#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	if (!list)
		return ;
	list->data = data;
	list->next = *begin_list;
	*begin_list = list;
}

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (!list)
// 		return (NULL);
// 	list->data = data;
// 	list->next = NULL;
// 	return (list);
// }