#include "funct.h"
void setlast(list** last, list* head)
{
	list* tmp = head;
	list* tmb = *last;
	while (tmp->next != NULL) tmp = tmp->next;
	tmb = tmp;
}