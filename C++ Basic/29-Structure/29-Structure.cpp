#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    string phone;
    string address;

    void Show()
    {
        cout << id << " " << name << " " 
             << phone << " " << address << endl;
    }
};

int main()
{
    //structure
    Student student;
    student.id = 1;
    student.name = "Pheakdey";
    student.phone = "090909090";
    student.address = "Phnom Penh";

    student.Show();

    cin.get();
}
