#include "lists.h"

/**
* add_nodeint_end - add node at end of a listint_t list.
*
* @head: head of double pointer
* @n: int add the list
* Return: NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr1;
listint_t *temp;

if (head == NULL)
return (NULL);
ptr1 = malloc(sizeof(listint_t));
if (ptr1 == NULL)
return (NULL);
ptr1->n = n;
ptr1->next = NULL;
if (*head == NULL)
{
*head = ptr1;
return (ptr1);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = ptr1;
return (ptr1);
}
