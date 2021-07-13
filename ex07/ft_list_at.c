#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 0)
		return (begin_list);
	if (!begin_list->next)
		return (0);
	return (ft_list_at(begin_list->next, nbr - 1));
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
// 	t_list	*list1 = ft_create_elem(0);
// 	t_list	*list2 = ft_create_elem(0);
// 	t_list	*list3 = ft_create_elem(0);
// 	t_list	*list4 = ft_create_elem(0);
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;
// 	printf("%d\n", ft_list_at(list1, 3) == list4);
// 	printf("%d\n", ft_list_at(list1, 2) == list3);
// 	printf("%d\n", ft_list_at(list1, 1) == list2);
// 	printf("%d\n", ft_list_at(list1, 0) == list1);
// 	return (0);
// }