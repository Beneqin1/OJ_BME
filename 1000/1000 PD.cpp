#include <iostream>
using namespace std;
int main()
{
	double pi = 3.14;
	double r{}, h{}, v{}, side{}, all{};
	cin >> h >> r;
	v = pi * r * r * h;
	side = 2 * pi * r * h;
	all = side + 2 * pi * r * r;
	cout << v << " " << side << " " << all << endl;
	return 0;
}