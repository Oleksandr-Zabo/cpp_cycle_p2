#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main()
{
	cout << "Guess the number" << endl;
	srand(time(0));
	int	rund_num = rand() % 500 + 1;
	int attempts = 0, user_num;

	//set start time
	auto start_time = chrono::steady_clock::now();
	
	for (attempts;; attempts++)
	{
		cout << "Enter your number(1-500,"
			<<" 0-stop program):\t";
		cin >> user_num;

		if (user_num !=0) {
			if (user_num == rund_num) {
				cout << "You won" << endl;
				attempts++;
				break;
				
			}
			else if (user_num > rund_num) {
				cout << "My number is smaller\n" 
					<< endl;
			}
			else {
				cout << "My number is greater\n" 
					<< endl;
			}
		}

		else {
			cout << "Game over"<< endl;
			break;
		}

	}
	
	// Set final time
	auto end_time = chrono::steady_clock::now();
	
	// Calculation of the execution time
	auto duration = end_time - start_time;

	// Displaying the result in seconds
	cout << "\nTime: " 
		<<chrono::duration_cast
		<chrono::seconds>(duration).count() 
		<< " sec\n";

	
	
	cout <<"Attempts: "<< attempts << endl;
	system("pause");
	return 0;
}