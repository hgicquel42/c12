#include "ft_list.h"
#include <stdlib.h>

// // REMOVE
// #include <stdio.h>

void	ft_list_remove_if(
	t_list **begin_list,
	void *data_ref,
	int (*cmp)(),
	void (*free_fct)(void *)
)
{
	t_list	*current;

	if (!begin_list || !*begin_list)
		return ;
	current = *begin_list;
	if (cmp(current->data, data_ref))
		return (ft_list_remove_if(&current->next, data_ref, cmp, free_fct));
	*begin_list = current->next;
	free_fct(current->data);
	free(current);
	ft_list_remove_if(begin_list, data_ref, cmp, free_fct);
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

// int	ft_intcmp(int *a, int *b)
// {
// 	return (*a - *b);
// }

// void	ft_intfree(void *a)
// {
// 	*((int *) a) = 0;
// }

// int	main(void)
// {
// 	int a = 42;
// 	int b = 24;
// 	int c = 12;
// 	int d = 21;
// 	int r = 21;
// 	t_list	*list1 = ft_create_elem(&a);
// 	t_list	*list2 = ft_create_elem(&b);
// 	t_list	*list3 = ft_create_elem(&c);
// 	t_list	*list4 = ft_create_elem(&d);
// 	t_list	**begin_list = malloc(sizeof(t_list *));
// 	*begin_list = list1;
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;
// 	ft_list_remove_if(begin_list, &r, &ft_intcmp, &ft_intfree);
// 	printf("%d\n", *((int *) list1->data));
// 	printf("%d\n", *((int *) list2->data));
// 	printf("%d\n", *((int *) list3->data));
// 	printf("%d\n", *((int *) list4->data));
// 	t_list *list = *begin_list;
// 	while (list)
// 	{
// 		printf("%d -> ", *((int *) list->data));
// 		list = list->next;
// 	}
// 	return (0);
// }