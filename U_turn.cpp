#include "funct.h"
void U_turn(list** last, list**head)
{
	
	list* tmp = *last;
	*head = tmp;
	list* vsp = new list;
	while (tmp) { vsp = tmp->next; tmp->next = tmp->prev; tmp->prev = vsp; tmp = tmp->next; }
}