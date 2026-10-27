#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int h{}, r{};
	double Pi = 3.14159;
	cin >> h >> r;
	double v = Pi * r * r * h / 1000;
	int n = ceil(20 / v);
	cout << n << endl;
	return 0;
}

/*

#include <cmath>
floor(2.3) = 2 // 向下取整或者高斯取整
ceil(2.3) = 3  // 向上取整
round(2.5) = 3 // 四舍五入

注意返回的值是double

*/