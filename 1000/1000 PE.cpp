#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a{}, b{}, c{}, p{}, area{};
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	area = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << area;
	return 0;
}