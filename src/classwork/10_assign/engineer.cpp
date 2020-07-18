//cpp
#include "engineer.h"



Engineer::Engineer (double pay, double bonus) : Employee()
{
    base_pay = pay;
    this->bonus = bonus;

}

double Engineer::get_pay() const
{
    return base_pay + bonus;
}