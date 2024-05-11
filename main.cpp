#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main()
{
	std::cout << "Guess the number" << endl;
	srand(time(0));
	int	rund_num = rand() % 500 + 1;
	int attempts = 0, user_num;

	//set start time
	auto start_time = chrono::steady_clock::now();
	
	for (attempts;; attempts++)
	{
		std::cout << "Enter your number(1-500,"
			<<" 0-stop program):\t";
		cin >> user_num;

		if (user_num == 0) {
			std::cout << "Game over" << endl;
			break;
		}

		else if (user_num == rund_num) {
			std::cout << "You won" << endl;
				attempts++;
				break;
				
			}
		else if (user_num > rund_num) {
			std::cout << "My number is smaller\n"
					<< endl;
			}
		else {
			std::cout << "My number is greater\n"
					<< endl;
			}

	}
	
	// Set final time
	auto end_time = chrono::steady_clock::now();
	
	// Calculation of the execution time
	auto duration = end_time - start_time;

	// Displaying the result in seconds
	std::cout << "\nTime: "
		<<chrono::duration_cast
		<chrono::seconds>(duration).count() 
		<< " sec\n";

	
	
	std::cout <<"Attempts: "<< attempts << endl;
	system("pause");
	return 0;
}