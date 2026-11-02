#include <iostream>
#include <cmath>
using namespace std;

int factorsum(int n)
{
	int sum{};
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	return sum;
}

int main()
{
	for (int a = 2; a <= 400; a++) {
		int b = factorsum(a);
		if (b > a && b < 400 && factorsum(b) == a) {
			cout << a << " " << b << endl;
		}
	}
	return 0;
}
