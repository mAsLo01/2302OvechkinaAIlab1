#include "funct.h"
void outlist(list* head)
{
	list* tmp = head;
	while (tmp->next != NULL) { cout << tmp->aa.bl << "->"; tmp = tmp->next; }
	cout << tmp->aa.bl << "->" << "NULL";
}