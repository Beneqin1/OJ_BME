#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 1 && n <= 2) {
		cout << "winter" << endl;
	}
	else if (n == 12) {
		cout << "winter" << endl;
	}
	else if (n >= 3 && n <= 5) {
		cout << "spring" << endl;
	}
	else if (n >= 6 && n <= 8) {
		cout << "summer" << endl;
	}
	else if (n >= 9 && n <= 11) {
		cout << "autumn" << endl;
	}
	else {
		cout << "bad" << endl;
	}
	return 0;
}

/*

没有 3 <= n <= 5 这种写法

&& 并且
|| 或者
!  不
== 等于

*/