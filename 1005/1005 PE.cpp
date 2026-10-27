#include <iostream>
using namespace std;

int main()
{
	for (int num = 123; num <= 432; num++) {
		int a = num / 100;
		int b = num / 10 - a * 10;
		int c = num - 100 * a - 10 * b;
		if ((a > 0 && a < 5 && b > 0 && b < 5 && c > 0 && c < 5) && a != b && a != c && b != c) {
			cout << num << endl;
		}
	}
	return 0;
}
