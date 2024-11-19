// オーバーロード・テンプレート

#include <iostream>

using namespace std;

// オーバーロード：同じ関数を型・引数の数によって別の作業を与えられる
int equation(int a, int b); 
double equation(double a, double b);

int main(){
    int x = 10;
    int y = 10;

    int z = equation(x, y); // 関数呼び出し(int型)

    cout << z << endl;

    double xd = 1.5;
    double yd = 0.1;

    double zd = equation(xd, yd);　// 関数呼び出し(double型)

    cout << zd << endl;
}

int equation(int a, int b){
    return 2 * a + b;
}
double equation(double a, double b){
    return 2 * a + b;
}
// オーバーロード：同じ関数を型・引数の数によって別の作業を与えられる