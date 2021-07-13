#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	return (1 + ft_list_size(begin_list->next));
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
// 	printf("0 = %d\n", ft_list_size(NULL));
// 	printf("1 = %d\n", ft_list_size(list3));
// 	printf("2 = %d\n", ft_list_size(list2));
// 	printf("3 = %d\n", ft_list_size(list1));
// 	return (0);
// }