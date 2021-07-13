#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	if (!begin_list->next)
		return (begin_list);
	return (ft_list_last(begin_list->next));
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
// 	t_list	*list1 = ft_create_elem(NULL);
// 	t_list	*list2 = ft_create_elem(NULL);
// 	t_list	*list3 = ft_create_elem(NULL);
// 	list1->next = list2;
// 	list2->next = list3;
// 	printf("%d\n", ft_list_last(NULL) == NULL);
// 	printf("%d\n", ft_list_last(list3) == list3);
// 	printf("%d\n", ft_list_last(list2) == list3);
// 	printf("%d\n", ft_list_last(list1) == list3);
// 	return (0);
// }