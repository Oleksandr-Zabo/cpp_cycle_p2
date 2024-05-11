#include <iostream>
using namespace std;

int main()
{
	int user_num, filtered_number = 0, multiplier = 1,digit;

	cout << "Enter number: ";
	cin >> user_num;
	for (user_num; user_num > 0; user_num /= 10)
	{
		digit = user_num % 10;
		if (user_num % 10 != 3 && user_num % 10 != 6) {
			filtered_number += digit * multiplier;
			multiplier *= 10;
		}
	}
	cout << "Your number wihout 3 && 6: "<< filtered_number<<endl;
	system("pause");
	return 0;
}