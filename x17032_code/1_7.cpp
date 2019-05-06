#include <iostream>
#include <set>
#include <cmath>

int sum_proper_divisors(int const number)
{
    int result = 1;
    for (int i = 2; i <= std::sqrt(number); i++)
    {
        if (number%i == 0)
        {
            result += (i == (number / i)) ? i : (i + number / i);
        }
    }
    
    return result;
}

void print_amicables(int const limit)
{
    for (int number = 4; number < limit; ++number)
    {
        auto sum1 = sum_proper_divisors(number);//number1の真の約数の総和
        
        if (sum1 < limit)//上限以下
        {
            auto sum2 = sum_proper_divisors(sum1);//sum1->number2として真の約数の総和
            
            if (sum2 == number && number != sum1)
            {
                std::cout << number << "," << sum1 << std::endl;
            }
        }
    }
}

void print_amicables_once(int const limit)
{
    
    std::set<int> printed;//intをキーとして扱う集合
    for (int number = 4; number < limit; ++number)
    {
        if (printed.find(number) != printed.end()) continue;//printedにnumberが見つかった
        
        auto sum1 = sum_proper_divisors(number);
        
        if (sum1 < limit)
        {
            auto sum2 = sum_proper_divisors(sum1);
            
            if (sum2 == number && number != sum1)
            {
                printed.insert(number);
                printed.insert(sum1);
                
                std::cout << number << "," << sum1 << std::endl;
            }
        }
    }
}

int main()
{
    print_amicables(1000000);//重複印字あり
    print_amicables_once(1000000);//重複印字なし
}

