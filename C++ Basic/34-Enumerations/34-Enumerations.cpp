#include <iostream>

using namespace std;

enum Day
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    //enum
    Day day = Friday;
    if (day == Friday)
    {
        cout << "friday" << endl;
    }
    cin.get();
}