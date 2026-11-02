#include <iostream>
using namespace std;

int get_age(int n)
{
	if (n == 1) {
		return 20;
	}
	return get_age(n - 1) + 2;
}

int main()
{
	cout << get_age(5) << endl;
	return 0;
}
