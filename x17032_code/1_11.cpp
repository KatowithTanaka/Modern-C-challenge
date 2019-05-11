//int i=0; i<(int)roman.size(); i++
#include <iostream>
#include <string>
#include <vector>

std::string to_roman(unsigned int num)
{
    std::vector<std::pair<unsigned int, char const*>> roman//ローマ数字のプリセット
    {
        { 1000, "M" },{ 900, "CM" },
        { 500, "D" },{ 400, "CD" },
        { 100, "C" },{ 90, "XC" },
        { 50, "L" },{ 40, "XL" },
        { 10, "X" },{ 9, "IX" },
        { 5, "V" },{ 4, "IV" },
        { 1, "I" }
    };
    
    std::string result;//解答用
    
    for(int i=0; i<(int)roman.size(); i++)
    {
        while (num >= roman[i].first)
        {
            result += roman[i].second;//文字の足し合わせ
            num -= roman[i].first;
        }
    }
    
    return result;
}

int main()
{
    //    for(int i = 1; i <= 100; ++i)
    //    {
    //        std::cout << i << "\t" << to_roman(i) << std::endl;
    //    }
    
    int number = 0;
    std::cout << "number:";
    std::cin >> number;//値の入力及び代入
    
    std::cout << to_roman(number) << std::endl;//ローマ数字の印字
}

