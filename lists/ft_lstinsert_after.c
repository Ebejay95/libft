void	ft_lstinsert_after(t_list **lst, t_list *next, t_list *new)
{
	if (lst == NULL || next == NULL || new == NULL)
		return (NULL);
	while (*lst == NULL && (*lst)->next != next)
		lst = &((*lst)->next);
	if (lst)
	{
		new->next = &((*lst)->next);
		lst->next = new;
	}
}
