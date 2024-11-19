// 関数

#include <iostream>
// 関数：作業をまとめることで見やすくする　⇒　y(x) = 2*x + 1; など

using namespace std;

void say_hello() { // 関数宣言・定義
// 返り値の型 関数名(引数) {処理内容}: void: 返り値なし
// 引数: 関数に与える値
// 返り値: 関数が返す値
    cout << "Hello, World" << endl; 
}

int sqrt(int a){
    return a * a; // aの2乗を返す
}

int main(){
    say_hello(); // 関数呼び出し
    say_hello();
    say_hello();

    int x = 10;

    int y = x * x;
    int y2 = sqrt(x); // y = 関数名(引数);

    cout << y2 << endl;
    
}