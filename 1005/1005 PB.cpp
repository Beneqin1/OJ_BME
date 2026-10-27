#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int x = 1; x * x < 2017; x++) {
        int y = sqrt(2017 - x * x);
        if (x * x + y * y == 2017 && y > 0) {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
