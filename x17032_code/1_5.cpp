#include <iostream>
#include <numeric>
#include <vector>

bool a(int n){
    bool judge = false;
    for(int i=2; i<n-1; i++){
        if(n%i == 0){
            judge = true;
        }
    }
    return judge;
}

int main()
{
    int a1 = 0;
    bool judge_a = true;
    bool judge_b = true;
    std::cout << "Input upper_limit:";
    std::cin >> a1;
    
    for(int i=2; i<=a1; i++){
        judge_a = a(i);
        judge_b = a(i+6);
        if((judge_a == false) && (judge_b == false)){
            printf("%d %d\n", i, i+6);
        }
    }
    printf("\n");
}

