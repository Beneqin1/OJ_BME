#include <iostream>
using namespace std;
int main()
{
	int n, j;
	cin >> n;
	if (n % 2 != 0) {
		cout << "odd" << endl;
	}
	else {
		cout << "even" << endl;
	}
	return 0;
}

/*

C++ 里余数的符号跟被除数一致，输入 -3 时 -3 % 2 等于 -1，j == 1 不成立，程序走 else 输出 even

而 -3 明明是奇数；题目说的是任意整数，负数用例一定会踩到

改成 if (n % 2 != 0) 对正负都成立，也就不必单独存一个 j 了

*/