
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

void Message(string firstName, string lastName)
{
    cout << firstName << " " << lastName << endl;
}

int main()
{
    //overloading functions

    Message();
    Message("Hello");
    Message("Ly", "Ratana");

    cin.get();
}