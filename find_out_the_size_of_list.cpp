#include "funct.h"
void find_out_the_size_of_list(list*head)
{
	list* tmp = head;
	int i = 1;
	while (tmp->next != NULL) { tmp = tmp->next; i++; }
	cout << '\n'<<"Размер списка: " << i;
}