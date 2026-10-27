#include <iostream>
using namespace std;

int main()
{
	int sum{};
	for (int i = 1; i <= 99; i = i + 2) {
		sum = sum + i * (i + 1) * (i + 2);
	}
	cout << sum << endl;
	return 0;
}

/*

for语句:

for (开始状态; 终止状态; 每次变化量) {
	循环体;
}

比如

for (int i = 1; i <= 5; i++) {
	cout << i << endl;
}

读法就是：从 i = 1 开始，只要 i 还小于等于 5 就继续，每跑一次 i 加 1，直到 i 不小于等于 5

当然，for 括号里面的内容也可以空下来，但是必须有分号

而且关于 i 的作用范围

在括号里 int i 声明的 i，出了 for 就没了，这通常正是你想要的；如果在外面就声明好再写 for，出了循环还能用

*/