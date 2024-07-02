
#include <iostream>

int main()
{
    //math expression
    // (+ - * / %)
    // (++ , --)
    int a = 10;
    int b = 3;
    int c = 0;
    //c = a % b;
    //a++;
    //++a;

    //c = a++;
    c = --a;
    std::cout << a << std::endl;
    std::cout << c << std::endl;

    std::cin.get();
}
