#include "ft_list.h"

// // REMOVE
// #include <stdio.h>
// #include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;
	t_list	*current;
	t_list	*previous;

	last = *begin_list;
	while (last->next)
		last = last->next;
	current = last;
	while ((*begin_list)->next)
	{
		previous = *begin_list;
		while (previous->next != current)
			previous = previous->next;
		previous->next = 0;
		current->next = previous;
		current = previous;
	}
	*begin_list = last;
}

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (!list)
// 		return (0);
// 	list->data = data;
// 	list->next = 0;
// 	return (list);
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*list1 = ft_create_elem("hello");
// 	t_list	*list2 = ft_create_elem("world");
// 	t_list	*list3 = ft_create_elem("it");
// 	t_list	*list4 = ft_create_elem("works");
// 	t_list	**begin_list = &list1;
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;

// 	list = *begin_list;
// 	while (list)
// 	{
// 		printf("%s\n", (char *) list->data);
// 		list = list->next;
// 	}
// 	ft_list_reverse(begin_list);
// 	list = *begin_list;
// 	while (list)
// 	{
// 		printf("%s\n", (char *) list->data);
// 		list = list->next;
// 	}
// 	return (0);
// }