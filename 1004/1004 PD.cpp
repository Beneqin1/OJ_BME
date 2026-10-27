#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}


/*

核心精髓：为什么能画出三角形？

因为内层循环的终点，是跟着外层的变量i 在变的

第 1 行，内层只循环 1 次

第 2 行，内层循环 2 次

第 i 行，内层就循环 i 次

这就产生了“一行比一行长”的效果，自然就拼成了三角形

*/