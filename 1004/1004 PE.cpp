#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int count{};
	bool inword = false;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			if (!inword) {
				count++;
				inword = true;
			}
		}
		else {
			inword = false;
		}
	}

	cout << count << endl;
	return 0;
}