#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 10;

    for (int i = 0; i <= 10; i++) 
    // for(初期化; 条件; 増減) {処理内容}
    // 初期化: 宣言も可, 条件: 条件を満たすとループ終了, 増減: ++i, i--, i=i+2 など
    {
        cout << i << endl; 
    }


    const int NUM = 5;

    // 配列 
    int IDs[NUM];   // 宣言:型名 変数[i];
    IDs[0] = 10;    // 代入:変数[i] = 値;
    IDs[1] = 20;
    IDs[2] = 30;

    int ID2s[] = { 100, 200, 300, 400, 500 }; // 初期化：型名 変数[] = {値1, 値2, ...};
    // []の中が空欄の場合、初期化時に要素数を指定しなくても自動で要素数が決まる

    cout << IDs[0] << endl;
    cout << IDs[1] << endl;
    cout << IDs[2] << endl;
    cout << IDs[3] << endl; 
    cout << IDs[4] << endl; // -858993460: 初期化していない場合、不定値が入る


    for (int i = 0; i <= NUM; i++)
    {
        cout << IDs[i] << endl;
    }
    // 出力：
    // 0
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10
    // 10
    // 20
    // 30
    // -858993460
    // -858993460
    // 10
    // 20
    // 30
    // -858993460
    // -858993460
    // -858993460

    for (int i = 0; i <= 10; i++) {

        if (i == 3) continue; // continue: 現在のループを飛ばす
        if (i == 7) break; // break: ループを強制終了する
    
        cout << i << endl;
    }
}
