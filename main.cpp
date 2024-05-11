#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int user_num, digit_sum = 0;
	cout << "Enter number: ";
	cin >> user_num;
	int num_sqare = pow(user_num, 2);

	for (int i = user_num; i != 0;) {
		digit_sum += i % 10;
		i /= 10;
	}
	digit_sum = pow(digit_sum, 3);

	cout << digit_sum << " " << num_sqare << endl;
	cout << bool(num_sqare == digit_sum)<<endl;
	system("pause");
	return 0;
}