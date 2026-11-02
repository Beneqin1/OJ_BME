#include <iostream>
#include <iomanip>
using namespace std;

double mysqrt(double n)
{
	double left = 0, right = n;

	if (n <= 1) right = 1;

	while (right - left >= 1e-7) {
		double mid = (right + left) / 2;
		if (mid * mid > n) right = mid;
		else left = mid;
	}

	return left;
}

int main()
{
	double x;
	cin >> x;
	double sqrt = mysqrt(x);
	cout << sqrt << endl;
	return 0;
}
