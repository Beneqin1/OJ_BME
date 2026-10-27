#include <iostream>
using namespace std;
int main()
{
	int year, month, num_1, num_2, num_3;
	cin >> year >> month;
	num_1 = year % 4;
	num_2 = year % 100;
	num_3 = year % 400;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		cout << "31" << endl;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		cout << "30" << endl;
	}
	else if (num_1 != 0 && month == 2 && num_3 != 0) {
		cout << "28" << endl;
	}
	else if (num_1 == 0 && num_2 != 0 && month == 2 || num_3 == 0) {
		cout << "29" << endl;
	}
	else if (num_1 == 0 && num_2 == 0 && month == 2 || num_3 == 0) {
		cout << "28" << endl;
	}
	else {
		cout << "bad" << endl;
	}
	return 0;
}

/*

最复杂的一集

我头一次知道当年份能被400整除是就不叫闰年

项目中的好习惯是按照可能性从大到小的情况给每个if排序

*/