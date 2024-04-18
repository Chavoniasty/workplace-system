#ifndef OFFICEEMPLOYEE_H
#define OFFICEEMPLOYEE_H

#include <string>

#include "Employee.h"

class OfficeEmployee : public Employee {
   public:
    OfficeEmployee(std::string name, float salary = 4600.0);
    std::string getRole() const override;
};

#endif  // OFFICEEMPLOYEE_H
