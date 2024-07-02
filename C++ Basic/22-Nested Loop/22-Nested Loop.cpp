
#include <iostream>

using namespace std;

int main()
{
    //nested loop
    int number = 10;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j <number - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cin.get();
}