#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, r;
	int	k;
	cin >> a >> b;
	k = floor(a / b);
	r = a - k * b;
	cout << r;
	return 0;
}