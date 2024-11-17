#include <iostream>
#include <string>

using namespace std; // 名前空間：ライブラリ参照時に名前被りを防ぐ
    // using namespace ~;　で省略可 ⇒今後はstd::を省略しても良い

int main() {
    std::cout << "Hello, World\n";
    cout << "Hello, World\n";
    // 同じ意味

    std::cout << "Hello, World" << std::endl; // endl: 改行を表す⇒C++において"\n"はあまり使用しない
    cout << "Hello, World" << endl;
    // 同じ意味
    // 出力： cout←出力 << "~~" << endl←改行;

    std::string message = "I love";
    string message2 = "I love";
    // 同じ意味

    cout << message << endl;
    cout << message2 << endl;

    {
        int x = 10;
        cout << x << endl; // ブロック内宣言：ブロック内でしか
    }
    // 上と下のxは別物
    if (true) {
        int x = 10;
        cout << x << endl; // ブロック内宣言：ブロック内でしか
    }

    cin >> message; // 入力: cin >> 変数; ←矢印の向きに注意
    cout << message;
}