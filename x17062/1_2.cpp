//
//  main.cpp
//  4_14
//
//  Created by x17062xx on 2019/04/14.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int x,y,blank,ex;
    cin >> x >> y;
    if (x < y) {  //大小の入れ替え
        blank = y;
        y = x;
        x = blank;
    }
    while (1) {
        ex = x % y;
        x = y;
        y = ex;
        if (ex==0) {
            break;
        }
    }
    cout << x << endl;
    return 0;
}
