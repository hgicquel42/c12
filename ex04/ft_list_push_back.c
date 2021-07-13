#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	if (*begin_list && (*begin_list)->next)
		return (ft_list_push_back(&((*begin_list)->next), data));
	list = ft_create_elem(data);
	if (*begin_list)
		(*begin_list)->next = list;
	else
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

// int	main(void)
// {
// 	int	x = 42;
// 	t_list	*list1 = ft_create_elem(NULL);
// 	t_list	*list2 = ft_create_elem(NULL);
// 	t_list	*list3 = ft_create_elem(NULL);
// 	list1->next = list2;
// 	list2->next = list3;
// 	t_list	**begin_list = &list1;
// 	ft_list_push_back(begin_list, &x);
// 	printf("%d\n", list3->next->data == &x);
// 	return (0);
// }