
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    //char and string
    char character = 'b';
    //cout << character;

    string name = "";
    cout << "Enter Name : ";
    //cin >> name;
    getline(cin, name);
    cout << "My name : " << name;

    _getch();
}
