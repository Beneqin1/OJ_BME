#include <iostream>;
using namespace std;

int main()
{
	int ma, mb, mc;
	cin >> ma >> mb >> mc;
    if (ma != mb && ma != mc) {
        cout << "A" << endl;
    }
    else if (mb != ma && mb != mc) {
        cout << "B" << endl;
    }
    else {
        cout << "C" << endl;
    }
    return 0;
}