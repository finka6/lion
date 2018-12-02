#include <iostream>
#include "plus.h"
#include "umn.h"
using namespace std;

int main()
{
	int count;
	double a, b;
	cout << "Vvedite a" << endl;
	cin >> a;
	cout << "vvedite b" << endl;
	cin >> b;
	cout << "vvedite deystvie" << endl;
	cin >> count;
	switch (count)
	{

	case 1:
		{
		cout << slozh(a,b) << endl;
			break;
		}
		case 2:
		{
			cout << umn(a,b)<< endl;
			break;
		}
		default: {
			cout << "Nevernoe chislo" << endl;
		}
	}
	system("pause");
	return 0;
}