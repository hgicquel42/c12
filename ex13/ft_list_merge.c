#include "ft_list.h"
#include <stdlib.h>

// // REMOVE
// #include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!begin_list1)
		return ;
	if (!*begin_list1)
		*begin_list1 = begin_list2;
	else
		ft_list_merge(&((*begin_list1)->next), begin_list2);
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
// 	t_list	*list1 = ft_create_elem("hello");
// 	t_list	*list2 = ft_create_elem("world");
// 	t_list	*list3 = ft_create_elem("it");
// 	t_list	*list4 = ft_create_elem("works");
// 	t_list	**begin_list = malloc(sizeof(t_list *));
// 	*begin_list = list1;
// 	list1->next = list2;

// 	list3->next = list4;
// 	ft_list_merge(begin_list, list3);
// 	t_list *list = *begin_list;
// 	while (list)
// 	{
// 		printf("%s\n", (char *) list->data);
// 		list = list->next;
// 	}
// 	return (0);
// }