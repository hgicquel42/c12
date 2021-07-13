#include "ft_list.h"

// // REMOVE
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list)
		return (0);
	if (!cmp(begin_list->data, data_ref))
		return (begin_list);
	return (ft_list_find(begin_list->next, data_ref, cmp));
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

// int	ft_strcmp(char *a, char *b)
// {
// 	while (*a && *a == *b)
// 		a++, b++;
// 	return (*a - *b);
// }

// int	main(void)
// {
// 	t_list	*list1 = ft_create_elem("hello");
// 	t_list	*list2 = ft_create_elem("world");
// 	t_list	*list3 = ft_create_elem("it");
// 	t_list	*list4 = ft_create_elem("works");
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;
// 	printf("%d\n", ft_list_find(list1, "it", &ft_strcmp) == list3);
// 	return (0);
// }