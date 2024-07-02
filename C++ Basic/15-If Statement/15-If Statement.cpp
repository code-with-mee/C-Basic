
#include <iostream>

using namespace std;

int main()
{
    //if statement
    int age = 45;
    /*
    if (age == 25)
        cout << "age=" << age;
    if (age != 25)
        cout << "age !=" << age;
    if (age <= 25)
        cout << "age <= " << age;
    if (age >= 25)
        cout << "age <= " << age;


    if (age > 25)
    {
        cout << "age is greater then 25" << endl;
        cout << "print age";
    }
    else
    {
        cout << "age is not greater then 25";
    }
    */
    int salary = 300;
    if (age > 25)
    {
        cout << "age greater then 25" << endl;
        if (salary >= 500)
        {
            cout << "salary greater or euql 500";
        }
        else
        {
            cout << "salary is " << salary;
        }
    }
    else if(age < 25)
    {
        cout << "age less then 25";
    }
    else if(age == 25)
    {
        cout << "age equal 25";
    }

    cin.get();
}
