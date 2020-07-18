//h
#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"

class Engineer : public Employee
{
public:
    Engineer (double pay, double bonus);
    virtual double get_pay() const;
    ~Engineer();

private:
    double base_pay;
    double bonus;
};

#endif