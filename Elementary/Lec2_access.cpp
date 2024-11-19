#include <iostream>
using namespace std;

// クラス ⇒ 構造体+関数　外からアクセスできるものと外からアクセスできないものを決める
class Person {
private: // アクセス指定子(クラス外からのアクセス) public:〇 private:×
    int HP = 0; // メンバ変数 ⇒ クラス内変数(基本private)
    int MP = 0;
    // この2つはクラス外からアクセスすることはできない

public: // メソッド⇒別名メンバ関数(基本public)
    int get_HP() { return HP; }         // privateのHPを取得する
    void set_HP(int hp) { HP = hp; }    // privateのHPにhpを代入する

    int get_MP() { return MP; }         // privateのMPを取得する 
    void set_MP(int mp) { MP = mp; }    // privateのMPにmpを代入する
};

int main()
{
    Person person1; // オブジェクト生成

    person1.set_HP(100); // セッターによって、クラス内の値をセット
    person1.set_MP(50); // HPとMPに値を代入

    cout << person1.get_HP() << endl; // ゲッターによって、クラス内の値を取得  
    cout << person1.get_MP() << endl;
}