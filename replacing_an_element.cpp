#include "funct.h"
int replacing_an_element(list** cur,  list** head1, list** last1, list** head)
{
	list* tmp = *cur;
	if (tmp->prev!=NULL)
	{
		list* vsp = tmp->prev;
		list* vsp1 = tmp->next;
		delete tmp;
		vsp->next = *head1;
		(*head1)->prev = vsp;
		if (vsp1 != NULL)
			vsp1->prev = *last1;
		(*last1)->next = vsp1;
	}
	else
	{
		list* vsp1 = tmp->next;
		list* tmb = *head1;
		delete tmp;
		*head = *head1;
		if (vsp1 != NULL)
			vsp1->prev = *last1;
		(*last1)->next = vsp1;
	}
	return 0;
}