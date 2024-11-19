#include <iostream>
#include <string>

using namespace std;

// 基底クラス
class Person{
    public:
        Person(){
            cout << "基底クラスのコンストラクタ" << endl;
        }
        ~Person(){
            cout << "基底クラスのデストラクタ" << endl;
        }
};

// 派生クラス
class Warrior : public Person{
    public:
        Warrior(){
            cout << "派生クラスのコンストラクタ" << endl;
        }
        ~Warrior(){
            cout << "派生クラスのデストラクタ" << endl;
        }
};

int main()
{
    Warrior warrior1;
}