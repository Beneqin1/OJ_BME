#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int n = 2; n * (n - 1) / 2 < num; n++) {
		int remainder = num - n * (n - 1) / 2;

		if (remainder % n == 0) {
			int a = remainder / n;
			for (int s = a; s <= a + n - 1; s++) {
				cout << s << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

/*

既然题目要求按照长度递增，那就把长度 n 放在最外

而且只要确定了 n ，那么 a 是可以被反向推出来的，见公式推导：
num = n * a + (n - 1) * n / 2 则
a = (num - n * (n * (n - 1) / 2)) / n

这个代码只有一层外层循环，时间复杂度从 O(N^2) 降到了 O(N)

n * (n - 1) / 2 < num 这个循环条件的意思是：
最少从 1 开始连续加 n 个数，如果这个和都大于等于 num 了，后面更长的序列肯定不符合要求

remainder 是去掉前 n-1 个数的增量后，剩下的总数值

用 remainder % n == 0 判断能否平分给 n 个数，如果能，算出来的 a 就是合法的连续序列起点

*/