#include <iostream>
using namespace std;
int main()

{
	int n, a, b, c;
	cin >> n;
	a = n / 100;
	b = n / 10 - 10 * a;
	c = n - 100 * a - 10 * b;
	int m = 100 * c + 10 * b + a;
	cout << m << endl;
	return 0;
}