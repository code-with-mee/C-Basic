#include <iostream>

using namespace std;

struct Address
{
    string city;
    string street;
    string no;
};

bool operator == (const Address& first,const Address& second)
{
    return (first.city == second.city
        && first.street == second.street
        && first.no == second.no);
}

int main()
{
    //operator overloading
    Address firstAddress = { "pp","34","01" };
    Address secondAddress = { "pp","34","01" };

    if(firstAddress == secondAddress)
    {
        cout << "equal";
    }

    cin.get();
}
