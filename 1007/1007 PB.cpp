#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int num, count{};
	cin >> num;
	for (int n = 2; count <= n; n++) {
		if (isprime(n)) {
			count++;
		}
		if (count == num) {
			cout << n;
			return 0;
		}
	}
}
