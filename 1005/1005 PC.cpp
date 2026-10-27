#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n{};
	for (int num = 1; num <= 1000; num++) {
		a = num / 100;
		b = num / 10 - 10 * a;
		c = num - 100 * a - 10 * b;
		if (a <= b && b <= c) {
			n++;
		}
	}
	cout << n;
	return 0;
}
