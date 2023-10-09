#include "funct.h"
void delist(list** head)
{
	list* tmp = *head;
	while (tmp)
	{
		*head = (*head)->next;
		//(*head)->prev = NULL;
		delete tmp;
		tmp = *head;
	}
}