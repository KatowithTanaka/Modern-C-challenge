#include <iostream>
#include <cmath>

void print_over(int limit){
    int sum = 0;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                sum += j;
            }
        }
        if(sum > i*2){
            std::cerr << i << "     abundance=" << sum-i*2 << std::endl;
        }
        sum = 0;
    }
}

int main()
{
    int limit = 0;
    std::cout << "Upper limit:";
    std::cin >> limit;
    
    print_over(limit);
}

