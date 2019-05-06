#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <math.h>
using namespace std;

void search_plus_perfect_num(int i, int j, int r){//アームストロング数を求める
    int result = pow(i/100, 3) + pow(j/10, 3) + pow(r, 3);
    int basic_num = i + j + r;
    
    if(result == basic_num){
        cout << basic_num << endl;
    }
    
}

int main() {
    //インスタンス生成
    for(int hun=100; hun<=900; hun+=100){//100の位の数を回す
        for(int ten=0; ten<=90; ten+=10){//10の位をの数を回す
            for(int one=0; one<=9; one++){//1の位の数を回す
                search_plus_perfect_num(hun, ten, one);//アームストロング数を求める
            }
        }
    }
    
    return 0;
}
