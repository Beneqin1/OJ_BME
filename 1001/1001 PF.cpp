#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n, d, ratio;
	cin >> n >> d;
	ratio = d / n * 100;
	cout << fixed << setprecision(3) << ratio << "%" << endl;
	return 0;
}

/*

保留某位有效数字做法：

1.用setprecision:

#include <inmanip>
using namespace std;
int main()
{
	...
	cout << fixed << setprecision(保留到小数点后第几位) << 变量 << endl;
	return 0;
}

这种比较有逻辑性

2.用printf:

#inlcude <cstdio>
int main()
{
	...
	printf("%.保留到小数点后第几位\n", 变量);
	return 0;
}

这里的 \n 和 endl 起到的作用是一样的。但是要想在后面输出字符比较复杂，容易混淆，不推荐

也就是说这个程序也可这么写:

#include <iostream>
#include <cstdio>
int main()
{
	double n, d, ratio;
	std::cin >> n >> d;
	ratio = d / n * 100;
	printf("%.3f%%\n", ratio);
	return 0;
}

*/