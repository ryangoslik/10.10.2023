#include <iostream>
# include <math.h>
using namespace std;
int main()
{
	int menu = 1;

	switch (menu) {
	case 1:
		cout << " to jest wpis namber one" << endl;
	case 2:
		cout << " to jest wpis namber two" << endl;
		break;
	case 3:
		cout << " to jest wpis namber three" << endl;
		break;


	default: cout << " to jest wpis default" << endl;
		break;

	}

	return 0;
}
