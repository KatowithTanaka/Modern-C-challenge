#include <iostream>


int main(int argc, const char * argv[])
{
    unsigned int a, b;
    std::cerr << "整数a= ";
    std::cin >> a;
    
    std::cerr << "整数b= ";
    std::cin >> b;
    
    for(int i=std::min(a, b); i>0; i--){
        if(a%i == 0 && b%i == 0){
            std::cerr << "最大公約数= " <<i << std::endl;
            break;
        }
    }
    return 0;
}
//サンプルコード
//#include <iostream>
//
//unsigned int gcd(unsigned int const a, unsigned int const b)
//{
//    return b == 0 ? a : gcd(b, a % b);//? -> 条件式
//}
//
//unsigned int gcd2(unsigned int a, unsigned int b)
//{
//    while (b != 0)
//    {
//        unsigned int r = a % b;
//        a = b;
//        b = r;
//    }
//
//    return a;
//}
//
//int main()
//{
//    std::cout << "Input numbers:";
//
//    unsigned int a, b;
//    std::cin >> a >> b;
//
//    std::cout
//    << "rec gcd(" << a << ", " << b << ")="
//    << gcd(a, b) << std::endl;
//
//    std::cout
//    << "    gcd(" << a << ", " << b << ")="
//    << gcd2(a, b) << std::endl;
//}

