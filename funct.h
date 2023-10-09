#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include "list.h"
#include "Form.h"
using namespace std;
int createinf(fstream& f, block& a, int* qq);
list* createhead(fstream& f, int* qq);
void addend(fstream& f, int* qq, list** head);
int createlist(list** head, fstream& f, int* qq);
void addbeg(list** last1, list** head, list**head1);
void delbeg(list** head);
void delend(list** head);
int insert(list** cur, list** head1, list** last1, list** head);
int getting_and_deleting_by_index(list** cur, int* flag, list** head);
void find_out_the_size_of_list (list* head);
int replacing_an_element(list** cur, list** head1, list** last1, list**head);
void U_turn(list** last, list** head);
int exchange(list** head, int* index, int* index1);
int checking_for_content1(list* head, list* head1, int* flag, int* index);
int checking_for_content2(list* head, list* head1);
void outlist(list* head);
void delist(list** head);
void adddend(list** head1, list** head);
void initF(Form& first, list* head);
int setcur(list** cur, list* head, int* index); 
void setlast(list** last, list* head);