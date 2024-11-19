#include <iostream>
#include <string>

using namespace std;

// 基底クラス
class Person{
    public:
        virtual void say_hello() { cout << "Hello Person" << endl; } // 仮想関数:virtual 変数宣言
};

// 派生クラス
class Warrior : public Person{
    public:
        void say_hello() { cout << "Hello Warrior" << endl; }
};

int main()
{

    // ポインタ作成(基底)
    Person *personPtr1;

    //オブジェクト生成(基底・派生)
    Person person1;
    Warrior warrior1;

    // 基底ポインタ・基底オブジェクト
    personPtr1 = &person1;
    personPtr1->say_hello(); // 基底クラスの関数を呼び出し

    // 基底ポインタ・派生オブジェクト
    personPtr1 = &warrior1;
    personPtr1->say_hello(); // 派生クラスの関数を呼び出し
    // 名前空間を指定すれば、基底クラスも呼べる
    personPtr1->Person::say_hello();
    // personPtr1->Warrior::say_hello(); // エラー
}