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
    int a1 = 0, num = 0;
    bool judge = true;
    std::cout << "Input count:";
    std::cin >> a1;
    
    for(int i=a1; i>=1; i--){
        judge = a(i);
        if(judge == false){
            num = i;
            break;
        }
    }
    
    std::cerr << num << std::endl;
}


