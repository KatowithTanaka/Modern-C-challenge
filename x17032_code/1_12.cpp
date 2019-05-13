#include<iostream>
#include<string>
#include <math.h>
//コンパイルにめっちゃ時間かかる
using namespace std;
int main(){
    std::pair<int, int> max_length = {0, 0};//最初のintが数字、二つ目が長さ
    int length = 0, num = 0;
    for(int i = 1; i<=1000000; i++){
        //std::cout << i << "\t";
        num = i;//num <- i
        while(num != 1){
            if(num%2 == 0){
                num /= 2;
                length ++;
            }else if(num%2 == 1){
                num = 3*num + 1;
                length++;
            }
        }
        if(max_length.second < length){
            max_length.first = i;
            max_length.second = length;
        }
    }
    std::cout << max_length.first << "\t" <<max_length.second << std::endl;
    return 0;
}

