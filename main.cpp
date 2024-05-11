#include <iostream>
using namespace std;

int main()
{
	int user_num_1, user_num_2, temp;
	cout << "Enter number 1: ";
	cin >> user_num_1;
	cout << "Enter number 1: ";
	cin >> user_num_2;
	for (int i = 1; i <= user_num_1; i++) {
		if (user_num_1 % i == 0 && user_num_2 % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}