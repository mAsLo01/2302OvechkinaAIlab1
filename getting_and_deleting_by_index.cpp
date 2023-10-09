#include "funct.h"
int getting_and_deleting_by_index(list** cur, int* flag, list**head)
{
	list* tmp = *cur;
	if (*flag==1)
	{
		cout << tmp->aa.bl;
	}
	else
	{
		list* vsp = new list;
		list* vsp1 = new list;
		vsp = tmp->prev;
		vsp1 = tmp->next;
		delete tmp;
		if (vsp !=NULL)
			vsp->next = vsp1;
		if (vsp1 != NULL)
			vsp1->prev = vsp;
		if (vsp== NULL)
			*head = vsp1;		
	}
	return 0;
}