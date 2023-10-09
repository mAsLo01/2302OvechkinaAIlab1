#include "funct.h"

void adddend(list** head1, list** last)
{

	list* tmp = *last;
	tmp->next = *head1;
	(*head1)->prev = tmp;
}