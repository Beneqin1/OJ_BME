#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 0 && n <= 3) {
		cout << 11 << endl;
	}
	else if (n > 3) {
		int m = n - 3;
		cout << 11 + m * 2.4 << endl;
	}
	else {
		cout << "bad" << endl;
	}
	return 0;
}