#include "variables.h"

//example
/*int add_numbers(int num1, int num2)
{
	return num1 + num2;
}*/
//write code for multiply_numbers function here
//function returns product of num1 and num2


double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = .0675;
	double result = tax_rate * meal_amount;
	return result;
}
double get_tip_amount(double meal_amount, double tip_rate)
{
	double result = meal_amount  * tip_rate;
	return result;
}



