t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
}

/* Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta*/