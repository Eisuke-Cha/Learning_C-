#include <iostream>
using namespace std;

// 構造体 ⇒ 関係のあるものをまとめる
struct Strc {
    int HP = 0;
    int MP = 0;
    int atack = 0;
};
    

int main()
{
    Strc person1; // person1というオブジェクトを生成

    person1 = { 100, 50, 10 }; //値を代入
    person1.MP = 100; // 構造体内の値にアクセスする場合 ⇒ 構造体名.変数名 = ~~

    cout << person1.HP << endl;
    cout << person1.MP << endl;
    cout << person1.atack << endl;
}