#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int rabbit = 0;
    int tortoise = 0;
    int rest_time = 0;
    int run_time = 0;
    
    for (int i = 1; i <= n; i++) {
        tortoise += 3;
        
        if (rest_time > 0) {
            rest_time--;
        }
        else {
            rabbit += 9;
            run_time++;
        }
        
        if (run_time == 10) {
            if (rabbit > tortoise) {
                rest_time = 30;
            }
            run_time = 0;
        }
    }
    
    cout << rabbit << " " << tortoise << endl;
    return 0;
}
