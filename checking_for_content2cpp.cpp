#include "funct.h"
int checking_for_content2(list* head, list* head1)
{
	int i = 0; int j = 1, v = 0, k =0;// const
	list* vsp = new list;
	list* tmp = head;//const
	list* tmb = head1;//const
	while (tmb->next != NULL) { tmb = tmb->next; j++; }//m
	while (tmp->next != NULL) { tmp = tmp->next; i++; }//n
	vsp = tmp;
	if (i > j) {
		for (v = 1; v < j; v++)
		{
			tmp = tmp->prev;//const
			i--;//const
		}
		tmb = head1;//const%
		v = 0;//const
		while (tmb)
		{
			if (tmp->aa.bl == tmb->aa.bl)
			{
				if (k == 0) vsp = tmp;
				tmb = tmb->next;//const
				tmp = tmp->next;//const
				v++;
				k++;//const
			}
			else
			{
				tmb = head1;//const
				if (vsp->prev != NULL)
				{
					
					if (k != 0)
					{
						i -= k; tmp = vsp->prev;
					}
					else {
						i--; tmp = tmp->prev; vsp = tmp;
					}
					k = 0;
				}
				else {
					cout << '\n' << "Не входит";//const
					return 0;
				}
			}
		}
		cout << '\n' << "Входит, индекс вхождения: " << i;//const

	}
	else
		cout << "Второй список больше первого";
	return 0;
}