#include <iostream>
// プロトタイプ宣言

using namespace std;

void say_hello(); // プロトタイプ宣言：コンパイラに関数の存在を伝える

int sqrt(int a);

int main(){
    say_hello(); // 関数呼び出し
    say_hello();
    say_hello();

    int x = 10;

    int y = x * x;
    int y2 = sqrt(x); // y = 関数名(引数);

    cout << y2 << endl;
}

// 関数定義 ⇒ プロトタイプ宣言によってmain関数の後に書ける
void say_hello() { 
    cout << "Hello, World" << endl; 
}

int sqrt(int a){
    return a * a; // aの2乗を返す
}