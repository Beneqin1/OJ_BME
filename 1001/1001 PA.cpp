#include <iostream>
using namespace std;
int main()
{
    int n{}, x{}, y{};
    cin >> n >> x >> y;
    int loss = y / x + (y % x != 0);
    cout << n - loss << endl;
    return 0;
}