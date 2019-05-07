#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <math.h>
#include <iterator>
using namespace std;

int main() {
    //インスタンス生成
    int num, pri_num[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    bool div = true, flag = true;
    
    cout << "Input:";
    cin >> num;
    
    while(div){
        flag = false;
        for(int i=0; i<10; i++){
            if(num%pri_num[i] == 0){
                cout << pri_num[i] << " ";
                num = num/pri_num[i];
                flag = true;
                break;
            }
        }
        if(flag == false){
            if(num != 1){
                cout<< num << endl;
            }else{
                cout<<"\n";
            }
            div = false;
        }
    }
    
    return 0;
}

