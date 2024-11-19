#include <iostream>

using namespace std;

// テンプレート宣言: どんな型でも対応可能
template <class T>          // template <class 型(自由)> 
T equation(T a=0, T b=0);  // 型　関数名(型 引数)

int main()
{
    int x = 10;
    int y = 10;

    int z = equation(x, y); // 関数呼び出し(int型)

    cout << z << endl;

    double xd = 1.5;
    double yd = 0.1;

    double zd = equation(xd, yd); // 関数呼び出し(double型)

    cout << zd << endl;
}

template <class T> // テンプレート:すべての方に対して同じ操作を行う
T equation(T a, T b)
{
    return 2 * a + b;
}