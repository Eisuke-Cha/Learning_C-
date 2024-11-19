// bool型・if文

#include <iostream>

int main()
{
    bool is_ok = false; // bool型：true　と　false　のみを持つ型
    is_ok = true; // true:1, false:0

    if (is_ok){ // if文：条件が真の時のみ実行
        std::cout << "is_ok is true" << "\n"; // 出力：is_ok is true
    } 


    int x = 30;

    if (x > 100){
        std::cout << "x > 100" << "\n";
    }
    else if (x > 10){
        std::cout << "x > 10" << "\n";
    }
    else{
        if (x == 10) std::cout << "x は 10 です" << "\n";
        std::cout << "x <= 10" << "\n"; 
    }

    int y = 50;

    if (x > 10 && y > 10){ // "&&": and, "||": or
        std::cout << "x も y も 10以上 " << "\n";
    }

}