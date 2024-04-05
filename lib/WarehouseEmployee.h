#ifndef WAREHOUSEEMPLOYEE_H
#define WAREHOUSEEMPLOYEE_H

#include "Employee.h"

class WarehouseEmployee : public Employee {
public:
    WarehouseEmployee(std::string name, float salary = 3200);
};

#endif // WAREHOUSEEMPLOYEE_H
