#include "funct.h"
void delend(list** last)
{
	list* tmp = *last;
	list* tmb = tmp->prev;
	delete tmp;
	tmb->next = NULL;
}