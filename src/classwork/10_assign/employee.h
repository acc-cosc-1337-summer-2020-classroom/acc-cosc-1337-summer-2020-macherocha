//h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee //abstract class
{
public:
    virtual double get_pay() const = 0;
    virtual ~Employee(){};//missing empty function code block w curly braces
};


#endif