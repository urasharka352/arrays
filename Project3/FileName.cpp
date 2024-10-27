#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float numbers[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter name" << i << ": ";
		cin >> numbers[i];
	}
	float min = numbers[0];
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	cout << "min: " << min << endl;

	float max = numbers[0];
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	cout << "max: " << max << endl;
	return 0;




}