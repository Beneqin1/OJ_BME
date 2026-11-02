#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double sum{0};
    int sign{1};
    
    for (int n = 1; ; n++) {
        double term = sign * 1.0 / (2 * n - 1);
        sum = sum + term;
        
        if (fabs(term) < 0.000001) {
            break;
        }
        
        sign = -sign;
    }
    
    double pai = sum * 4;
    cout << setprecision(6) << pai << endl;
    
    return 0;
}
