// 純粋仮想関数・抽象クラス
// 純粋仮想関数：仮想関数の中身を持たない関数

#include <iostream>
#include <string>

using namespace std;


// 抽象クラス：純粋仮想関数を持つクラス ⇒ 必要な要素を決める、オブジェクトを生成できない
class Person {
public:
    virtual void say_hello() = 0; // 純粋仮想関数 ⇒ virtual 関数宣言 = 0;
};

class Warrior : public Person {
public:
    void say_hello() { cout << "Hello Warrior" << endl; } // 純粋仮想関数は派生クラスで必ず実体を作成する⇒実体とは中身を持つ関数
};

int main()
{
    // Person person1; // エラー：抽象クラスはオブジェクト生成できない
    Warrior warrior1;

    warrior1.say_hello();

}
