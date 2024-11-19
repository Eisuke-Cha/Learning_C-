// 継承
#include <iostream>
#include <string>

using namespace std;

class Person{ // 基底クラス(変数HP, 関数get_HP, set_HPを持つ)
private:
    int HP = 0;

public:
    int get_HP() { return HP; }
    void set_HP(int HP) { this->HP = HP; } // this->HP：クラス内のHP(private)のこと

};

class Warrior : public Person{ // 派生クラス⇐基底クラスの中身をすべて引き継ぐ
private:
    int atack = 0; // 派生クラス独自のメンバ変数

public:
    int get_atack() { return atack; }
    void set_atack(int atack) { this->atack = atack; };
};

int main()
{
    Warrior warrior1; // オブジェクト生成
    warrior1.set_HP(100);       // 基底クラスで作成した関数も派生クラス内で使用可能
    warrior1.set_atack(10);

    cout << warrior1.get_HP() << endl;   
    cout << warrior1.get_atack() << endl;
}