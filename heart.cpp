#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch = 'N';
	int size = 50;

	ofstream out("heart.out");

	for (int i = size * 3 / 4; i < size; i += 2)
	{
		for (int j = 0; j < size - i; j++)
			cout << " ";
		for (int j = 0; j <i - size + i; j++)
			cout << ch;
		for (int j = 0; j < (size - i) * 2; j++)
			cout << " ";
		for (int j = 0; j < i - size + i; j++)
			cout << ch;
		cout << endl;
	}
	for (int i = 0; i < size / 8; i++)
	{
		for (int i = 0; i < size * 2; i++)
			cout << ch;
		cout << endl;
	}
	for (int i = size; i > -1; i -= 2)
	{
		for (int j = 0; j < size - i; j++)
			cout << " ";
		for (int j = 0; j < i * 2 - 1; j++)
			cout << ch;
		cout << endl;
	}

	return 0;
}
