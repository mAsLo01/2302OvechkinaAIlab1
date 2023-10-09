#include "funct.h"
int setcur(list** cur, list * head, int* index)
{
	int i = 0;
	list* tmp = head;
	list* tmb = *cur;
	for (i; i < *index; i++)
	{
		if (tmp->next==NULL or *index<0)
		{
			cout << "\nТакого индекса не существует";
			*index = -1;
			return 0;
		}
		
		else
			tmp = tmp->next;
		
	}
	*cur = tmp;
	return 0;
}