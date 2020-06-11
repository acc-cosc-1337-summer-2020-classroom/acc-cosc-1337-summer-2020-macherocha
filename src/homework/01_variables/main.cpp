//write include statements
#include "variables.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;   using std::cin;


/*
create main function
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tax_amount;
	double tip_amount;
	double total;


	cout << "Enter the amount of your meal: \n";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Enter the desired rate to tip: \n";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<< "Meal Amount: " << meal_amount << "\n"; 
	cout<< "Sales Tax: " << tax_amount << "\n";
	cout<< "Tip Amount: " << tip_amount << "\n"; 
	cout<< "Total: " << total << "\n";
	
	return 0;
}
