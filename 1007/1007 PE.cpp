#include <iostream>
#include <iomanip>
using namespace std;

long long moneymade(int n)
{
	long long sum{};
	long long current = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum + current;
		current = current * 2;
	}
	return sum;
}

int main()
{
	long long N;
	cin >> N;

	long long value = moneymade(30);
	long long rent = N * 3000;
	if (rent > value) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
