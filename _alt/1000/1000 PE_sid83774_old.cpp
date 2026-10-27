#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a{}, b{}, c{}, p{}, s{};
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s << endl;
	return 0;
}



/*


Q:

为什么

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	double a{}, b{}, c{}, p{}, s{};
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << s = sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	return 0;
}

是错的，而

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	double a{}, b{}, c{}, p{}, s{};
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s << endl;
	return 0;
}

是对的？


A:

第一个错在 运算符优先级，不是海伦公式本身。

关键在于这一句：

cpp
cout << s = sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
C++ 中 << 的优先级 高于 =，所以编译器不会把它理解成：

cpp
cout << (s = sqrt(...)) << endl;
而会理解成类似：

cpp
(cout << s) = (sqrt(...) << endl);
也就是说，右边变成了：

cpp
sqrt(...) << endl
sqrt(...) 的结果是 double，而 endl 是流操作符，double << endl 是没有定义的，所以编译报错。

而第二个程序：

cpp
s = sqrt(p * (p - a) * (p - b) * (p - c));
cout << s << endl;
先单独把面积算出来赋给 s，然后再输出 s，逻辑清楚，所以正确。

如果你想写在一行里，应该加括号：

cpp
cout << (s = sqrt(p * (p - a) * (p - b) * (p - c))) << endl;
或者干脆不保存到 s：

cpp
cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
总结：
= 的优先级低于 <<，所以 cout << s = ... 不会先执行 s = ...，需要加括号。


*/