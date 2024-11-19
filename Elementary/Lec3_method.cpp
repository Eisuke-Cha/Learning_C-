#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        int HP = 0;

    public:
        int get_HP() { return HP; }         // ゲッター
        void set_HP(int hp) { HP = hp; }    // セッター

        void say_hello(string message); // 関数の宣言
        int sqrt(int x);
};

// 関数(メソッド)の定義⇒ 帰り値 クラス名::関数名(引数)
void Person::say_hello(string message){
    cout << "Hello." << message << endl;
}

int Person::sqrt(int x){
    return x * x;
}

int main()
{
    Person person1; // オブジェクト生成

    person1.say_hello("Masashi");
    cout << person1.sqrt(5) << endl;
}