//h
#ifndef SALESEMPLOYEE_H
#define SALESEMPLOYEE_H 

#include "employee.h"

class SalesEmployee : public Employee
{
public:
    SalesEmployee (int hrs, double rte, double comm);
    virtual double get_pay() const;
    ~SalesEmployee();
private:
    double hours;
    double commission;
    double pay_rate;
};

#endif