#include "funct.h"
void addbeg(list** last1, list** head, list** head1)
{
	list* tmp = *last1;
	list* tmp1 = *head;
	tmp->next = *head;
	tmp1->prev = tmp;
	*head = *head1;
}