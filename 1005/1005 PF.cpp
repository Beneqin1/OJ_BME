#include <iostream>
using namespace std;

int main()
{
    int depth, a, b, c, d, e;
    for (depth = 1; ; depth++) {
        for (a = 1; a * 2 < depth; a++) {
            if (265 * depth == 721 * a) {
                b = depth - 2 * a;
                c = depth - 3 * b;
                d = depth - 4 * c;
                e = depth - 5 * d;
                cout << depth << endl;
                cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                return 0;
            }
        }
    }
    return 0;
}

/*

一开始的代码经过修改是这样的：

#include <iostream>
using namespace std;

int main()
{
    int depth, a, b, c, d, e;
    for (depth = 1; ; depth++) {
        for (a = 1; a * 2 < depth; a++) {
            b = depth - 2 * a;
            c = depth - 3 * b;
            d = depth - 4 * c;
            e = depth - 5 * d;

            if (b > 0 && c > 0 && d > 0 && e > 0) {
                if (depth == 6 * e + a) {
                    cout << depth << endl;
                    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

数学推导解不定方程，经常能把多个变量消去，变成一个核心等式，以此我简化了代码

比如这题消元后得到 265 * depth == 721 * a

因为我们只是用这个等式来做 if 判断，没有做除法，所以不会出现浮点数和精度丢失问题

用纯整数乘法判断相等，既快又准

*/