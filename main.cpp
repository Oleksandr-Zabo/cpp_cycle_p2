#include <iostream>
using namespace std;

int main()
{
	int numbers=0;
	for (size_t i = 100; i <= 999; i++)
	{
		if (i / 100 == i % 10 || i / 100 == (i / 10) % 10
			|| (i / 10) % 10 == i % 10) {
			numbers++;
		}
	}
	cout << numbers << endl;
	system("pause");
	return 0;
}