//h
#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"

class Engineer : public Employee
{
public:
    Engineer (double pay, double bonus);
    double get_pay() const;
    ~Engineer(){};//missing empty function code block w curly braces

private:
    double base_pay;
    double bonus;
};

#endif