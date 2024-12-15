void ft_lstadd_back(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/*Añade el nodo ’new’ al final de la lista ’lst’ */