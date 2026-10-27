#include <iostream>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	a = n % 3;
	b = n % 5;
	if (a == 0 && b == 0) {
		cout << "A" << endl;
	}
	else if (a != 0 && b != 0) {
		cout << "B" << endl;
	}
	else if (a == 0 && b != 0) {
		cout << "C" << endl;
	}
	else {
		cout << "D" << endl;
	}
	return 0;
}