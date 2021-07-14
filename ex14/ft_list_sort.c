void	ft_list_sort_sized(t_list *, int (*cmp)())
{

}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*next;
	void	*data;

	if (!begin_list || !*begin_list || !(*begin_list)->next)
		return ;
	current = *begin_list;
	next = current->next;
	while (next)
	{
		if (!cmp(current->data, next->data))
		{
			data = current->data;
			current->data = next->data;
			next->data = data;
			l
		}
		current = current->next;
		next = current->next;
	}
	current = next;
}