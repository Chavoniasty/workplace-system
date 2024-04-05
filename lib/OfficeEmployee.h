#ifndef OFFICEEMPLOYEE_H
#define OFFICEEMPLOYEE_H

#include "Employee.h"

class OfficeEmployee : public Employee {
public:
    OfficeEmployee(std::string name, float salary = 4600);
};

#endif // OFFICEEMPLOYEE_H
