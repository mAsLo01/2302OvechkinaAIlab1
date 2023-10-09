#include "funct.h"
#include "time.h"
int main()
{

	setlocale(LC_ALL, "Russian");
	fstream f("in.txt", ios::in);
	fstream f1("in1.txt", ios::in);
	int h = 3, mar = 0, index = 1, index1 = 0, len1 = 0, flag = 1; char s;
	if (!f.is_open())
	{
		cout << "Не открывается";
	}
	else
	{

		f.get(s);
		if (s == '\n' || f.eof())
		{
			cout << "Файл пуст...";
			return 0;
		}
		else
		{
			//clock_t start, end;
			//start = clock();
			f.seekg(-1, ios::cur);
			cout << "Выберите, что хотите сделать и введите номер пункта" << '\n' << "1. добавление в конец списка" << '\n' << "2.добавление в начало списка" << '\n' << "3.удаление последнего элемента" << '\n' << "4.удаление первого элемента" << '\n' << "5.добавление элемента по индексу(вставка перед элементом, который был ранее доступен по этому индексу)" << '\n' << "6.получение элемента по индексу" << '\n' << "7.удаление элемента по индексу" << '\n' << "8.получение размера списка" << '\n' << "9.удаление всех элементов списка" << '\n' << "10.замена элемента по индексу на передаваемый элемент" << '\n' << "11.проверка на пустоту списка" << '\n' << "12.меняет порядок элементов в списке на обратный" << '\n' << "13.вставка другого списка в список, начиная с индекса" << '\n' << "14.вставка другого списка в конец" << '\n' << "15.вставка другого списка в начало" << '\n' << "16.проверка на содержание другого списка в списке, можно сделать целочисленного типа" << '\n' << "17.поиск первого вхождения другого списка в список" << '\n' << "18.поиск последнего вхождения другого списка в список" << '\n' << "19.обмен двух элементов списка по индексам" << '\n';
			cin >> mar;
			list* head;
			list* head1;
			createlist(&head, f, &h);
			Form first;
			
			initF(first, head);
			if (h == 5) return 0;
			h = 0;
			//createlist(&head1, f1, &qq);
			cout << '\n' << "Изначальный список:" << '\n';
			//outlist(first.h);
			if (mar == 14 || mar == 1)
			{
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' |5| f1.eof())
				{
					cout << '\n' << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << '\n' << "Список/элемент, который надо добавить в конец:" << '\n';
				//outlist(second.h);
				clock_t start, end;

				start = clock();
				adddend(&(second.h), &(first.l));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				cout << '\n' << "Измененный список:" << '\n';
				//outlist(first.h);
			}
			if (mar == 2 || mar == 15)
			{
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' || f1.eof())
				{
					cout << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << '\n' << "Список/элемент, который надо добавить в начало:" << '\n';
				outlist(second.h);
				clock_t start, end;

				start = clock();
				addbeg(&(second.l), &(first.h), &(second.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				cout << '\n' << "Измененный список:" << '\n';
				outlist(first.h);
				//delist(&head1);
			}
			if (mar == 3)
			{
				clock_t start, end;

				start = clock();
				delend(&(first.l));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				cout << '\n' << "Измененный список:" << '\n';
				outlist(first.h);
			}
			if (mar == 4)
			{
				clock_t start, end;

				start = clock();
				delbeg(&(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				cout << '\n' << "Измененный список:" << '\n';
				outlist(first.h);
			}
			if (mar == 5 || mar == 13)
			{
				cout << '\n' << "Введите индекс элемента, перед которым хотите вставить новый элемент";
				cin >> index;
				if (index < 0)
					cout << "Введены некорректные данные";
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' || f1.eof())
				{
					cout << '\n' << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << '\n' << "Список/элемент, который надо вставить по индексу:" << '\n';
				outlist(second.h);
				clock_t start, end;

				start = clock();
				setcur(&(first.c), first.h, &index);
				if (index!=-1)
					insert(&(first.c), &(second.h),&(second.l), &(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				if (index != -1) {
					cout << '\n' << "Измененный список:" << '\n';
					//outlist(first.h);
				}
				//delete second;

			}
			if (mar == 6)
			{
				cout << '\n' << "Введите индекс элемента, значение которого хотите получить:";
				cin >> index;
				if (index < 0)
					cout << "Введены некорректные данные";
				flag = 1;
				clock_t start, end;

				start = clock();
				setcur(&(first.c), first.h, &index);
				if (index != -1) 
				getting_and_deleting_by_index(&(first.c), &flag,&(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				return 0;

			}
			if (mar == 7)
			{
				cout << '\n' << "Введите индекс элемента, который хотите удалить:";
				cin >> index;
				if (index < 0)
					cout << "Введены некорректные данные";
				flag = 0;
				clock_t start, end;

				start = clock();
				setcur(&(first.c), first.h, &index);
				getting_and_deleting_by_index(&(first.c), &flag, &(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				
				if (index != -1) {
					cout << '\n' << "Измененный список:" << '\n';
					outlist(first.h);
				}
				return 0;
			}
			if (mar == 8)
			{
				clock_t start, end;

				start = clock();
				find_out_the_size_of_list(first.h);
				end = clock();
				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

			}
			if (mar == 10)
			{
				cout << '\n' << "Введите индекс элемента, который хотите заменить:";
				cin >> index;
				if (index < 0)
					cout << "Введены некорректные данные";
				setcur(&(first.c), first.h, &index);
				flag = 0;
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' || f1.eof())
				{
					cout << '\n' << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << "\nСписок, на который мы заменяем элемент:\n";
				outlist(second.h);
				clock_t start, end;
				setlast(&(second.l), second.h);
				start = clock();
				replacing_an_element(&(first.c),  &(second.h),&(second.l), &(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				if (index != -1) {
					cout << '\n' << "Измененный список:" << '\n';
					outlist(first.h);
				}
				//delete second;
			}
			if (mar == 11)
			{
				clock_t start, end;

				start = clock();
				if (head != NULL) cout << '\n' << "Список не пустой";
				else cout << '\n' << "Список пустой";
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

			}
			if (mar == 12)
			{
				setlast(&(first.l), first.h);
				clock_t start, end;

				start = clock();
				U_turn(&(first.l), &(first.h));
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				cout << '\n' << "Измененный список:" << '\n';
				//outlist(first.h);
			}
			if (mar == 16 || mar == 17)
			{
				if (mar == 16) flag = 0;
				else flag = 1;
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' || f1.eof())
				{
					cout << '\n' << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << '\n' << "Список, вхождение которого мы ищем:" << '\n';
				//outlist(second->h);
				list* tmp = second.h;
				while (tmp->next != NULL) {
					len1++; tmp = tmp->next;
				}
				clock_t start, end;

				start = clock();
				checking_for_content1(first.h, second.h, &flag, &len1);
				delist(&(second.h));
				//delete second;
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

			}
			if (mar == 18)
			{
				if (!f1.is_open())
				{
					cout << "Не открывается файл с элементом";
				}
				h = 3;
				f1.get(s);
				if (s == '\n' || f1.eof())
				{
					cout << '\n' << "Файл 2 пуст...";
					return 0;
				}
				else f1.seekg(-1, ios::cur);
				createlist(&head1, f1, &h);
				Form second;
				initF(second, head1);
				cout << '\n' << "Список, вхождение которого мы ищем:" << '\n';
				//outlist(head1);
				clock_t start, end;

				start = clock();
				checking_for_content2(first.h, second.h);
				end = clock();

				printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

				delist(&(second.h));
				//delete second;
			}
			if (mar == 19)
			{
				cout << '\n' << "Введите первый индекс ";
				cin >> index;
				cout << '\n' << "Введите второй индекс ";
				cin >> index1;
				list* tmp = head;
				int i = 0;
				while (tmp->next != NULL) { tmp = tmp->next; i++; }
				if (index > i or index1 > i or index < 0 or index1 < 0)
					cout << '\n' << "Такого индекса не существует";
				else {
					clock_t start, end;

					start = clock();

					exchange(&(first.h), &index, &index1);
					end = clock();

					printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

					cout << '\n' << "Измененный список:" << '\n';
					//outlist(first.h);
				}
			}
			//clock_t start, end;
			//start = clock();
			
			delist(&(first.h));
			
		//delete first;
			//end = clock();

			//printf("The above code block was executed in %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

			return 0;
		}
	}
}