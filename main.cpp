#include <iostream>
using namespace std;

int main()
{
	int int_currency=0;
	float your_money, eur_grn = 42.72, dol_eur = 0.9282;
	string currency;

	cout << "Currency converter\n" << endl;
	for (int i = 0;; i++)
	{
		cout << "Write your currency "
			<<"(UAH-hryvnia, USD-dollars, "
			<<"EUR-euros, stop- stop program)" 
			<< endl;
		cin >> currency;


		if (currency != "UAH" && currency != "USD" && 
			currency != "EUR" && currency != "stop") 
		{
			cout << "Incorrect data" << endl;
		}
		else if (currency == "stop"){
			break;
		}

		cout << "Enter how much money:  ";
		cin >> your_money;
		if (currency == "UAH") {
			int_currency = 1;
		}
		else if (currency == "USD") {
			int_currency = 2;
		}
		else if (currency == "EUR") {
			int_currency = 3;
		}

		

		
		switch (int_currency) {

		case 1: //UAH
		{
			cout << "You have: \n"
				<<"USD: "
				<< your_money / eur_grn / dol_eur
				<< "\nEUR: "
				<< your_money / eur_grn << endl;

		}break;

		case 2://USD
		{
			cout << "You have: \n"
				<< "UAH: "
				<< your_money * eur_grn * dol_eur
				<< "\nEUR: "
				<< your_money * dol_eur << endl;


		}break;

		case 3://EUR
		{
			cout << "You have: \n"
				<< "UAH: "
				<< your_money * eur_grn
				<< "\nUSD: "
				<< your_money / dol_eur << endl;
		}break;
		default:{
			break;
		}break;
		}




	}
	system("pause");
	return 0;
}