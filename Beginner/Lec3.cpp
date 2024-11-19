// 変数・型・演算子

#include <iostream>
#include <string>

int main()
{
    int x; // 変数宣言
    x = 3; // 代入

    int y = 5; // 変数宣言と代入を同時に行う(初期化)
    int z

    z = x + y; // 足し算

    std::cout << z << "\n"; // 出力
    std::cout << x - y << "\n"; // 引き算
    std::cout << x * y << "\n"; // 掛け算
    std::cout << x / y << "\n"; // 割り算
    std::cout << x % y << "\n"; // 余り

    double d = 3.14; // double型は浮動小数点数型(3.14e0)

    std::cout << d << "\n";

    char c = 'a'; // char型は文字型

    std::string message = "I love";     // string型は文字列型(ライブラリ必須)
    std::string message2 = " Japan";

    std::cout << message + message2; // +で文字列も連結できる