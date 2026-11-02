#include <iostream>
#include <cmath>
using namespace std;

int adjoin(int a, int b)
{
	int temp{b};
	for (int n{}; ; n++) {
		if (temp / 10 > 0) {
			temp = temp / 10;
			a = a * 10;
		}
		else {
			return a * 10 + b;
			return 0;
		}
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << adjoin(a, b);
	
	return 0;
}
