#include "funct.h"
int createinf(fstream& f, block& a, int* qq)
{
	char s;
	if (!f.eof())
	{
		if (*qq != 3)
			f.get(s);
		f.get(s);
		if (s == '0' or s == '1' or s == '2' or s == '3' or s == '4' or s == '5' or s == '6' or s == '7' or s == '8' or s == '9')
		{
			f.seekg(-1, ios::cur);
			f >> a.bl;
			*qq = 0;
		}
		else
		{
			cout << "¬ведены некорректные данные";
			*qq = 5;
			return 0;

		}
	}
	else *qq += 1;
	return 0;
}