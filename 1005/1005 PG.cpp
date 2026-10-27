#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int x = 1; x < 10000; x++) {
		int x_delta = x * x - x;
		
		int p = 1;
		int temp = x;
		while (temp > 0) {
			p *= 10;
			temp /= 10;
		}

		if (x_delta % p == 0) {
			cout << x << endl;
		}
	}
	return 0;
}

/*

这里第一次我用的是取 10 的对数，代码见下：

int k = round(log10(x)) + 1;       // 准确求出位数
int p = pow(10, k);                // 求出真正的模数
if (x_delta % p == 0) { ... }

而不用 log10 的原因：
log10 返回的是 double 浮点数，遇到 10、100、1000 这种数时，很可能算出来是 1.9999999
直接强转成 int 会变成 1，导致 10 的幂次算错，从而漏解

这里的 while (temp > 0) 循环：
temp 每次除以 10，相当于在“砍掉”最后一位
每砍一位，p 就乘 10

比如 x = 76：
第一次 temp=76，p变成10，temp变成7
第二次 temp=7，p变成100，temp变成0
结束，p=100 正好是两位数的最小模数

*/