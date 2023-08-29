#include "lists.h"
/**
 * free_listint2 - make sure it frees the linked list 
 * @head: pointer to the listint_t this is the list to be naturally freed 
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
