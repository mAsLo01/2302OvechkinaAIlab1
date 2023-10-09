#include "funct.h"
void delbeg(list** head)
{
	list* tmp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	delete tmp;

}