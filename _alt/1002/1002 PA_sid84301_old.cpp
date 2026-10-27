#include <iostream>
using namespace std;
int main()
{
	int n, j;
	cin >> n;
	j = n % 2;
	if (j == 1) {
		cout << "odd" << endl;
	}
	else {
		cout << "even" << endl;
	}
	return 0;
}