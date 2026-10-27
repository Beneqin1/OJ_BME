#include <iostream>
using namespace std;

int main()
{
	int n{0};
	for (int a = 1; a <= 98; a++) {
		for (int b = a + 1; b <= 99; b++) {
			for (int c = b + 1; c <= 100; c++) {
				if (a * a + b * b == c * c) {
					n++;
				}
			}
		}
	}
	cout << n;
	return 0;
}
