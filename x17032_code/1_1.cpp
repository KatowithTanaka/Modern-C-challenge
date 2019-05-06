#include <iostream>


int main(int argc, const char * argv[])
{
    unsigned int limit = 0;//対象の型が符号なしの表現を持つ
    std::cout << "Upper limit:";
    std::cin >> limit;//入力
    
    unsigned long long sum = 0;//long longを使う->ループカウンタが100,000になる前にオーバーフローする
    for(unsigned int i=3; i<limit; ++i){
        if(i%3 == 0 || i%5 == 0){
            sum+=i;
        }
    }
    std::cerr << "sum=" << sum << std::endl;//印字
    return 0;
}

