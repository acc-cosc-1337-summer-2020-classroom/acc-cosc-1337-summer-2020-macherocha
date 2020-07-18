//main
#include <iostream>
#include <iomanip>
#include "engineer.h"
#include "sales_employee.h"


using std::cout; using std::fixed;  using std::setprecision; using std::endl;


/*int main()
{

  SalesEmployee *pSales = nullptr;
  Engineer *pEng = nullptr;

  SalesEmployee sales;
  pSales = &sales;

  Engineer eng;
  pEng = $eng;

  return 0;
}*/

int main()
{
	Employee* employee = new Engineer(1500, 400);

	cout << "Engineer pay: $" << fixed << setprecision(2) << employee->get_pay() << endl;

	//delete employee;
  //employee = nullptr;

	employee = new SalesEmployee(40, 10, 500);

	cout << "Sales Person pay: $" << fixed << setprecision(2) << employee->get_pay() << endl;
	
	//delete employee;
  //employee = nullptr;

	return 0 ;
}