#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count_num{};
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			count_num++;
		}
	}
	cout << count_num << endl;
	return 0;
}

/*

string 是字符串类型
存一串字符，要 #include <string>
cin >> s 读入一串，遇到空格或换行就停

s.size() 是字符串里有几个字符
s[i] 取第 i 个字符，下标从 0 开始
s[0] 是第一个，s[s.size() - 1] 是最后一个
越界访问不会报错，直接出乱子，别写 s[s.size()]

字符串里每个元素都是 char
判断是不是数字就看它在不在 '0' 到 '9' 之间
'0' 的编码是 48，'9' 是 57
s[i] >= '0' && s[i] <= '9'  就是数字
不能写成 0 <= s[i] <= 9，那是数学写法，C++ 不认

*/