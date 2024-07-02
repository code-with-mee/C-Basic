#include <iostream>

using namespace std;

//declare function
void Message(string message);

int main()
{
    //declare functions
    Message("Hello");
    cin.get();
}

void Message(string message)
{
    cout << message << endl;
}
