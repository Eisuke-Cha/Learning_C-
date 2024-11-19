#include <iostream>

using namespace std;

void sqrt(int t[]);

int main()
{
    int s[] = {10, 20, 30, 40, 50};

    sqrt(s); // 配列の先頭アドレスが渡される

    for (int i = 0; i < 5; i++) 
    // for (型 変数名 = 初期値; 条件⇒iが5未満まで繰り返す; 増減)
    {
        cout << s[i] << endl; // 配列の要素を表示
    }
}

void sqrt(int t[]) // 配列アドレスを受け取る : 型 変数名[]
{
    t[0] = 100;
}