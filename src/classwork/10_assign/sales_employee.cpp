//cpp
#include "sales_employee.h"

SalesEmployee::SalesEmployee(int hrs, double rte, double comm) : Employee()
{


    hours = hrs;
    commission = comm;
    pay_rate = rte;
}
double SalesEmployee::get_pay() const
{
    
    return hours * pay_rate + commission;
}