#include <iostream>
#include <bitset>
#include <string>

//解答をみました

using namespace std;

unsigned int gray_encode(unsigned int const num)
{
    //std::cout << num << " " << (num >> 1) <<std::endl;
    
    return num ^ (num >> 1);//ビットごとのXOR
}

unsigned int gray_decode(unsigned int gray)
{
    for (unsigned int bit = 1U << 31; bit > 1; bit >>= 1)//>>= -> 右シフト代入
    {
        if (gray & bit) gray ^= bit >> 1;//& -> AND  0でなければtrue, 0ならばfalseを返す.
        //^= -> 排他的論理和代入
    }
    return gray;
}

std::string to_binary(unsigned int value, int const digits)
{
    return std::bitset<32>(value).to_string().substr(32-digits, digits);
}

int main()
{
    std::cout << "Number\tBinary\tGray\tDecoded\n";
    std::cout << "------\t------\t----\t-------\n";
    
    for (unsigned int n = 0; n < 32; ++n)
    {
        auto encg = gray_encode(n);
        auto decg = gray_decode(encg);
        cout << encg<< endl;
        std::cout
        << n << "\t" << to_binary(n, 5) << "\t"
        << to_binary(encg, 5) << "\t" << decg << "\n";
    }
}


