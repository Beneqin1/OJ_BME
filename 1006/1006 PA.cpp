#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    double e_pow = 1.0;
    double term = 1.0;

    for (int n = 1; n < 99; n++) {
        term = term * x / n;
        e_pow = e_pow + term;
        
        if (fabs(term) < 0.000001) {
            break;
        }
    }
    
    cout << e_pow << endl;
    return 0;
}
