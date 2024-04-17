#ifndef WAREHOUSEEMPLOYEE_H
#define WAREHOUSEEMPLOYEE_H

#include "Employee.h"

class WarehouseEmployee : public Employee {
public:
    public:
    WarehouseEmployee(std::string name, float salary = 3200);
    ~WarehouseEmployee() = default;
    float getSalary() const override;
    void setSalary(float tempSalary) override;
    void setName(std::string tempName) override;
    std::string getName() const override;
    std::string getRole() const override;

};

#endif // WAREHOUSEEMPLOYEE_H
