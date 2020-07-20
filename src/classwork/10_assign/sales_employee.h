//h
#ifndef SALESEMPLOYEE_H
#define SALESEMPLOYEE_H 

#include "employee.h"

class SalesEmployee : public Employee
{
public:
    SalesEmployee (int hrs, double rte, double comm);
    double get_pay() const;
    ~SalesEmployee(){};//missing empty function code block w curly braces
private:
    double hours;
    double commission;
    double pay_rate;
};

#endif