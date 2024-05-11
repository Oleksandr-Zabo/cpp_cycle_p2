#include <iostream>
using namespace std;

int main()
{
	int user_num;
	cout << "Enter number: ";
	cin >> user_num;
	for (int i = 1; i <= user_num; i++) {
		if (user_num % i == 0) {
			cout << i << " ";
		}
	}
	cout<< endl;
	system("pause");
	return 0;
}