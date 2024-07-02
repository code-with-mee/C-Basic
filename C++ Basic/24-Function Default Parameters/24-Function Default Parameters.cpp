
#include <iostream>

using namespace std;

float Convert(int dollar,float exchangeRate = 4000)
{
    return dollar * exchangeRate;
}

int main()
{
    //default parameters

    float exch = Convert(10);
    cout << exch << endl;

    cin.get();
}