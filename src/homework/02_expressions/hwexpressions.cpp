#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
const double tax_rate = 0.0675;

double get_sales_tax_amount(double meal_amount)
{
	double sales_tax = meal_amount * tax_rate;

	return sales_tax;
}

double get_tip_amount(double meal_amount, double tip_rate)
 {
	tip_rate = tip_rate / 100;
	double tip_amount = meal_amount * tip_rate;

	return tip_amount;
 }


