#ifndef OFFICEEMPLOYEE_H
#define OFFICEEMPLOYEE_H

#include "Employee.h"
#include <string>

class OfficeEmployee : public Employee {    
public:
    OfficeEmployee(std::string name, float salary = 4600);
    ~OfficeEmployee() = default;
    float getSalary() const override;
    void setSalary(float tempSalary) override;
    void setName(std::string tempName) override;
    std::string getName() const override;
    std::string getRole() const override;
};

#endif // OFFICEEMPLOYEE_H
