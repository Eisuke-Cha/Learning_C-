// オーバーライド・仮想関数

#include <iostream>
#include <string>
using namespace std;

// 基底クラス
class Person {
public:
    void say_hello() { cout << "Hello Person" << endl; }
};

// 派生クラス
class Warrior : public Person {
public:
    void say_hello() { cout << "Hello Warrior" << endl; }
    // オーバーライド⇒派生クラスで同じ関数を宣言できる
};

int main()
{

    // ポインタ作成(基底・派生)
    Person *personPtr1;
    Warrior* warriorPtr1;

    //オブジェクト生成(基底・派生)
    Person person1;
    Warrior warrior1;

    warrior1.say_hello(); // 派生クラスの関数を呼び出し

    // 基底ポインタ・基底オブジェクト
    personPtr1 = &person1;
    personPtr1->say_hello(); // 基底クラスの関数を呼び出し

    // 基底ポインタ・派生オブジェクト　⇒エラー吐かない
    personPtr1 = &warrior1;
    personPtr1->say_hello(); // 基底クラスの関数を呼び出し

    // 派生ポインタ・基底オブジェクト　⇒エラー
    // warriorPtr1 = &person1;
    // warriorPtr1->say_hello(); // 派生クラスの関数を呼び出し

    // 派生ポインタ・派生オブジェクト
    warriorPtr1 = &warrior1;
    warriorPtr1->say_hello(); // 派生クラスの関数を呼び出し


}