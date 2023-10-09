#include  "funct.h"
int createlist(list** head, fstream& f, int* qq)
{
	*head = createhead(f, qq);
	list* tmp = new list;
	while (tmp != NULL && *qq != 1)
	{
		addend(f, qq, head);
		if (*qq == 5) return 0;
	}
	return 0;
}