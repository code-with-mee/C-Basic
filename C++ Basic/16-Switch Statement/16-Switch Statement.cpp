
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //switch statement
    cout << "MENU" << endl;
    cout << "1) Register" << endl;
    cout << "2) View List" << endl;
    cout << "3) Remove" << endl;

    cout << "choice : ";
    int choice = 0;
    cin >> choice;

    switch (choice)
    {
    case 1: cout << "choice 1";
        break;
    case 2: cout << "choice 2";
        break;
    case 3: cout << "choice 3";
        break;
    default: cout << "default case";
        break;
    }
    _getch();
}
