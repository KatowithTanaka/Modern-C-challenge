//
//  main.cpp
//  compile
//
//  Created by x17032xx on 2019/03/31.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <iostream>

int main()
{
    std::cout << "Input numbers:";
    
    unsigned int a, b;
    std::cin >> a >> b;
    
    int num = 0;
    int count_a = 2, count_b = 2;
    
    while(1){
        
        if(a == b){
            num = a;
            break;
        }
        
        if(a > b){
            b *= count_b;
            count_b++;
        }else{
            a *= count_a;
            count_a++;
        }
    }
    
    std::cout << "result=" << num << std::endl;
}

