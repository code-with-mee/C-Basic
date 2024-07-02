
#include <iostream>

using namespace std;

int main()
{
    //continue and break
    for (int i = 0; i <= 100; i++)
    {
        if (i >= 10 && i <= 20)
            continue;

        if (i == 90)
        {
            cout << "Time to break for loop" << endl;
            break;
        }

        cout << "number=>" << i << endl;
    }
    cin.get();
}
