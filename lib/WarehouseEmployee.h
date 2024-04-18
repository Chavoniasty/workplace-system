#ifndef WAREHOUSEEMPLOYEE_H
#define WAREHOUSEEMPLOYEE_H

#include <string>

#include "Employee.h"

class WarehouseEmployee : public Employee {
   public:
    WarehouseEmployee(std::string name, float salary = 4600.0);
    std::string getRole() const override;
};

#endif  // WAREHOUSEEMPLOYEE_H
