#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	int delta = year % 4;
	int special1 = year % 100;
	int special2 = year % 400;

	if ((delta == 0 && special1 != 0) || special2 == 0) {
		cout << year << endl;
	}
	else {
		int left = year - delta;
		while (!((left % 4 == 0 && left % 100 != 0) || left % 400 == 0)) {
			left--;
		}
		int right = year + (4 - delta);
		while (!((right % 4 == 0 && right % 100 != 0) || right % 400 == 0)) {
			right++;
		}

		int dLeft = year - left;
		int dRight = right - year;

		if (dLeft < dRight)      cout << left << endl;
		else if (dRight < dLeft) cout << right << endl;
		else                     cout << left << " " << right << endl;
	}
	return 0;
}

/*

while (条件) {
	循环体
}

只要条件成立就一直循环
先判断后执行，条件一开始就不成立就一次都不跑

循环体里一定要改变条件里用到的变量
不然永远停不下来，就是死循环

left--  就是 left = left - 1
left++  就是 left = left + 1

! 是取反
!((left % 4 == 0 && left % 100 != 0) || left % 400 == 0)
整句意思就是 left 不是闰年

*/