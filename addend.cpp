#include "funct.h"
void addend(fstream& f, int* qq, list** head)
{
	list* tmp = new list;
	createinf(f, tmp->aa, qq);
	if (*qq != 1)
	{
		tmp->next = NULL;
		list* p = *head;
		while (p->next != NULL) p = p->next;
		tmp->prev = p;
		p->next = tmp;
	}

}