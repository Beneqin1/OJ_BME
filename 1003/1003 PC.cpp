#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, ratio_12, ratio_23;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1)) {
		cout << "BAD" << endl;
	}
	else {
		cout << "OK" << endl;
	}
	return 0;
}