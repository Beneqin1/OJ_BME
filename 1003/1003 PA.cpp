#include <iostream>
using namespace std;

int main()
{
    int d1, h1, m1, d2, h2, m2;
    cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;
    int start = (d1 * 24 + h1) * 60 + m1;
    int end = (d2 * 24 + h2) * 60 + m2;
    int total = end - start;
    cout << total / 60 << " " << total % 60 << endl;
    return 0;
}