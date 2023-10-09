#include "funct.h"
int insert(list** cur, list** head1,  list ** last1, list** head)
{
	int i = 0;
	list* c = *cur;
	list* p = c->prev;
	list* h = *head1;
	list* l = *last1;
	if (c->prev == NULL)
	{
		l->next = c;
		c->prev = l;
		*head = h;
	}
	else
	{
		l->next = c;
		c->prev = l;
		p->next = h;
		h->prev = p;
	}
	return 0;
}