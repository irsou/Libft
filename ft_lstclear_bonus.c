void ft_lstclear(t_list **lst, void (*del)(void*))
{
	
}

/* Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.*/