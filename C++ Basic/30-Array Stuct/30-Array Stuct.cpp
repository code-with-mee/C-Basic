#include <iostream>
#include <vector>

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
    vector<Student> students;

    students.push_back({ 1,"Pheakdey" ,"090909090" ,"Phnom Penh" });
    students.push_back({ 2,"VirakBoth" ,"090909090" ,"Phnom Penh" });
    students.push_back({ 3,"Chantra" ,"090909090" ,"Phnom Penh" });
    students.push_back({ 4,"Chantra" ,"090909090" ,"Phnom Penh" });
    students.push_back({ 5,"Chantra" ,"090909090" ,"Phnom Penh" });
    students.push_back({ 6,"Chantra" ,"090909090" ,"Phnom Penh" });

    for (Student student : students)
    {
        student.Show();
    }

    cin.get();
}
