#include <iostream>
#include <vector>

using namespace std;

struct Address
{
    string city;
    string street;
    string no;
};

struct Student
{
    int id;
    string name;
    string phone;
    Address address;

    void Show()
    {
        cout << id << " " << name << " "
            << phone << " " << endl;
        cout << " " << address.city << " "
            << address.street << " " << address.no << endl;
    }
};

int main()
{
    //structure
    vector<Student> students;

    students.push_back({ 1,"Pheakdey" ,"090909090" ,{ "Phnom Penh","23","05" } });
    students.push_back({ 2,"VirakBoth" ,"090909090" ,{ "KPS","23","05" } });
 
    for (Student student : students)
    {
        student.Show();
    }

    cin.get();
}