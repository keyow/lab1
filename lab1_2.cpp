#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	int numbers[4] = {};
	int positive = 0;
	int negative = 0;
	string answer;

	cout << "Do you want enter numbers or make them random? (yes / no): ";
	cin >> answer;
	cout << endl;

	if (!strcmp(answer.c_str(), "yes"))
	{
		srand(time(0));
		for (int i = 0; i < 4; i++)
			numbers[i] = rand() % 100 - 50;
	}
	else
		if (!strcmp(answer.c_str(), "no"))
		{
			cout << "Enter A, B, C, D: " << endl;
			for (int i = 0; i < 4; i++)
				cin >> numbers[i];
		}
		else
		{
			cout << "Wrong input.";
			exit(-1);
		}

	cout << "Numbers: ";
	for (int i = 0; i < 4; i++)
	{
		cout << numbers[i] << "\t";
		if (numbers[i] > 0) positive += 1;
		else if (numbers[i] < 0) negative += 1;
	}
	cout << endl;

	if (positive != 1)
		cout << "There are " << positive << " positive numbers." << endl;
	else
		cout << "There is " << positive << " positive number." << endl;

	if (negative != 1)
		cout << "There are " << negative << " negative numbers." << endl;
	else
		cout << "There is " << negative << " negative number." << endl;

	return 0;
}