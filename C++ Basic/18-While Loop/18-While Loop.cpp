
#include <iostream>

using namespace std;

int main()
{
    //while loop
    int number = 1;
    while (number <= 100)
    {
        cout << "number=" << number << endl;
        if (number >= 50)
        {
            cout << "Number >= 50";
            break;
        }

        number++;
    }

    cin.get();
}