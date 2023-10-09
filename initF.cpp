#include "funct.h"
void initF(Form& first, list* head)
{
	/*Form* tmp = *first;
	tmp->h = head;
	tmp->c = head;
	tmp->p = NULL;
	list* tmb = head;
	while (tmb->next != NULL) tmb = tmb->next;
	tmp->l = tmb;*/
	first.h = head;
	first.c = head;
	first.p = NULL;
	list* tmb = head;
	while (tmb->next != NULL) tmb = tmb->next;
	first.l = tmb;

}