#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    cout << n << "=";
    bool first = true;
    
    for (int i = 2; n > 1; i++) {
        while (n % i == 0) {
            if (!first) {
                cout << "*";
            }
            cout << i;
            first = false;
            n = n / i;
        }
    }
    cout << endl;
    
    return 0;
}
