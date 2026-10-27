#include <iostream>
using namespace std;

int main()
{
    int monthIncome;
    cin >> monthIncome;
    double yearIncome = monthIncome * 12.0;
    double taxable = yearIncome - 60000.0;
    double tax = 0.0;
    if (taxable <= 0) {
        tax = 0.0;
    }
    else if (taxable <= 36000) {
        tax = taxable * 0.03;
    }
    else if (taxable <= 144000) {
        tax = 36000 * 0.03 + (taxable - 36000) * 0.10;
    }
    else if (taxable <= 300000) {
        tax = 36000 * 0.03 + (144000 - 36000) * 0.10
            + (taxable - 144000) * 0.20;
    }
    else if (taxable <= 420000) {
        tax = 36000 * 0.03 + (144000 - 36000) * 0.10
            + (300000 - 144000) * 0.20 + (taxable - 300000) * 0.25;
    }
    else if (taxable <= 660000) {
        tax = 36000 * 0.03 + (144000 - 36000) * 0.10
            + (300000 - 144000) * 0.20 + (420000 - 300000) * 0.25
            + (taxable - 420000) * 0.30;
    }
    else if (taxable <= 960000) {
        tax = 36000 * 0.03 + (144000 - 36000) * 0.10
            + (300000 - 144000) * 0.20 + (420000 - 300000) * 0.25
            + (660000 - 420000) * 0.30 + (taxable - 660000) * 0.35;
    }
    else {
        tax = 36000 * 0.03 + (144000 - 36000) * 0.10
            + (300000 - 144000) * 0.20 + (420000 - 300000) * 0.25
            + (660000 - 420000) * 0.30 + (960000 - 660000) * 0.35
            + (taxable - 960000) * 0.45;
    }
    cout << tax << endl;
    return 0;
}