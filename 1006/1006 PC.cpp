#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double sum{1}, term(1);
    
    for (int n = 1; ; n++) {
        term = term * n / (2 * n + 1);
        sum = sum + term;
        
        if (fabs(term) < 0.000001) {
            break;
        }
        
    }
    
    double pai = sum * 2;
    cout << setprecision(6) << pai << endl;
    
    return 0;
}
