#include <iostream>
using namespace std;

int main()
{
    int days, sum{};
    cin >> days;
    for (int n = 1; ; n++) {
        if ((1 + n) * n <= 2 * days) {
            sum = sum + n * n;
            }
        else {
            sum = sum + (days - (n - 1) * n / 2) * n;
            break;
            }
        }
        
    cout << sum;
    return 0;
}
