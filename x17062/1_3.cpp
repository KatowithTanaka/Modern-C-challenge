//
//  main.cpp
//  1_3
//
//  Created by x17062xx on 2019/04/16.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
unsigned int greatestNum(int a,int b);
using namespace std;
int main(int argc, const char * argv[]) {
    int x,y;
    cin >> x >> y;
    cout << (x*y)/greatestNum(x, y)<<endl;  //ab=gl(a*b=最大公約数*最小公倍数)
    return 0;
}

unsigned int greatestNum(int a,int b){  //最大公約数を返す関数
    int blank,ex;
    if (a < b) {  //大小の入れ替え
        blank = b;
        b = a;
        a = blank;
    }
    while (1) {
        ex = a % b;
        a = b;
        b = ex;
        if (ex==0) {
            break;
        }
    }
    return a;
}
