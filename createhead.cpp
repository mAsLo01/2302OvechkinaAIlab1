#include "funct.h"
list* createhead(fstream& f, int* qq)
{
	list* tmp = new list;
	createinf(f, tmp->aa, qq); 
	tmp->next = NULL;
	tmp->prev = NULL;
	return tmp;
}