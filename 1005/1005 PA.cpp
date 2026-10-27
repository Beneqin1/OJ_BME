#include <iostream>
using namespace std;

int main()
{
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 7; b++) {
            int c = 20 - 5 * a - 2 * b;
            if (c >= 1) {
                cout << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}
