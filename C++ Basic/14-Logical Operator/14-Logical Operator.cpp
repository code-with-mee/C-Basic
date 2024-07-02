
#include <iostream>

using namespace std;

int main()
{
    //logical operator
    int age = 15;
    bool isAllowRegister = age > 18 && age < 50;
    bool isAllow = age > 25 || age < 50;
    //cout << !isAllow;

    int salary = 5000;
    bool isAllowIn = (age >= 18 && age <= 50) 
                        || (salary >= 1000);
    cout << isAllowIn;
    cin.get();
}