#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double pi = 3.14;
	double r{}, h{}, v{}, side{}, all{};
	cin >> h >> r;
	v = pi * pow(r, 2) * h;
	side = 2 * pi * r * h;
	all = side + 2 * pi * pow(r, 2);
	cout << v << " " << side << " " << all << endl;
	return 0;
}