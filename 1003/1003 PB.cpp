#include <iostream>
using namespace std;

int main()
{
	int day;
	cin >> day;
	switch (day) {
		case 0:
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		default:
			cout << "Bad" << endl;
			break;
	}
	return 0;
}

/*

switch (变量名) {
	case 变量情况一:
		输出;
		break;
	case 变量情况二:
		输出;
		break;
	default:
		输出;
		break;
}

default即else

*/