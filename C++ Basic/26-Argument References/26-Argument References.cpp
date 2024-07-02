
#include <iostream>

using namespace std;

void Message(string& message)
{
    message = message + " world";
}

int main()
{
    // argument references
    string message = "Hello";
    Message(message);
    cout << message << endl;
    cin.get();
}