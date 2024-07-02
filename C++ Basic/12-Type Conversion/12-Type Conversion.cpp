
#include <iostream>

using namespace std;

int main()
{
    //type conversion
    int x = 10;
    int y = 20;

    float z = x / (float)y;
    float zz = x / static_cast<float>(y);

    float a = 2.0;
    int b = 10;

    int c = (int)a + b;

    cout << c;
    cin.get();
}