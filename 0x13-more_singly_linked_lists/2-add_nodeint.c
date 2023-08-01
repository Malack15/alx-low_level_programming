#include "lists.h"

/**
* add_nodeint - add node at beginning of a listint_t list.
*
* @head: head of double pointer
* @n: int add the list
* Return: NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ongeza;

if (head == NULL)
return (NULL);
ongeza = malloc(sizeof(listint_t));
if (ongeza == NULL)
return (NULL);
ongeza->n = n;
ongeza->next = *head;
*head = ongeza;
return (ongeza);
}
