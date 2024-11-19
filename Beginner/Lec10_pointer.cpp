#include <iostream>

using namespace std;

void sqrt(int* x, int* y); // int*: ポインタ型

int main()
{
    int x = 10;

    // xのアドレスを表示
    cout << &x << endl; // 参照： &(変数)でアドレスを取得
    // 10       ←x
    // 000000ACAB8FF674 ←&x

    int* xPtr; // ポインタ⇒宣言：int* 変数名; *:関節参照演算子
    xPtr = &x; // 代入の時はアドレスを代入する。

    cout << *xPtr << endl; // アドレスの指し示す値を表示: *変数名
    cout << xPtr << endl;  // アドレスを表示

    int y = 10;
    int* yPtr = &y;

    cout << *yPtr << endl;

    sqrt(xPtr, yPtr); // 参照渡し(通常は値渡し)

    cout << *yPtr << endl;
}

void sqrt(int* x, int* y) // 関数引数： (型* 変数名) ⇒ 呼び出し： 関数名(アドレス)
{
    *y = *x * *x;  // returnを使わない
}

// 出力
// 
// 000000ACAB8FF674
// 10
// 000000ACAB8FF674
// 10
// 100