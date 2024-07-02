
#include <iostream>

using namespace std;

void Message()
{
    cout << "Message" << endl;
}

void Message(string message)
{
    cout << message << endl;
}
void Sum(int x, int y)
{
    cout << "sum=" << x + y << endl;
}

float GetPI()
{
    return 3.14f;
}
int Mul(int x, int y)
{
    return x * y;
}

int main()
{
    //function
    
    //invoke function (method)
    //Message();
    //Message("Welcome to C++");
    //Sum(10, 20);

    //float pi = GetPI();
    //cout << pi << endl;

    int mul = Mul(3, 5);
    int mul2 = Mul(10, 20);

    cout << mul << endl;
    cout << mul2 << endl;

    cin.get();
}