
#include <iostream>

using namespace std;

int main()
{
	//range loop
	int numbers[7] = { 10,30,20,50,60,25,45};

	//cout << sizeof(numbers) << endl;
	//cout << sizeof(int) << endl;

	int count = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < count ; i++)
	{
		//cout << numbers[i] << endl;
	}

	for (int number : numbers)
	{
		cout << number << endl;
	}

	cin.get();
}
