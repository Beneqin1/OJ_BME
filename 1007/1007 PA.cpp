#include <iostream>
using namespace std;

double squaresum(double a, double b)
{
    double result = a * a + b * b;
    return result;
}

int main()
{
    double x, y;
    cin >> x >> y;
    double ans = squaresum(x, y);
    cout << ans << endl;
    return 0;
}
