#include "funct.h"
int checking_for_content1(list* head, list* head1, int* flag, int* len1)
{
	list* tmp = head;
	list* tmb = head1;
	list* vsp = new list;
	int k = 0;
	int i = 0, x = 0, y = 0, s =0;
	while (tmb->next != NULL) { tmb = tmb->next; x++; }//m
	while (tmp->next != NULL) { tmp = tmp->next; y++; }//n
	tmb = head1;
	tmp = head;
	vsp = tmp;
	if (x <= y)
	{
		while (tmp)
		{
			while (tmb)
			{
				if (tmp != NULL)
				{
					if (tmp->aa.bl == tmb->aa.bl)
					{
						if (k == 0) vsp = tmp;
						tmp = tmp->next;
						tmb = tmb->next;
						k++;
							
					}
					else
					{
						tmb = head1;
						if (vsp->next != NULL)
						{
							if (k != 0)
							{
								i += k; tmp = vsp->next;
							}
							else
							{
								i++; tmp = tmp->next; vsp = tmp;
							}
							k = 0;
						}
						else 
						{
							if (*flag != 8)
								cout << '\n' << "Не входит";
							return 0;
						}
					}
				}
				else { if (s == 0) cout << "Не входит"; return 0; }
			}
			cout << '\n' << "Входит, индекс вхождения " << i; s++;
			if (*flag == 1) {
				return 0;
			}
			if (tmp != NULL)
				tmp = vsp->next;
			k = 0;
			*flag = 8;
			tmb = head1;
			i++;
		}
	}
	else
		cout << "Не входит"; return 0;
	return 0;
}