#include "../lib/WarehouseEmployee.h"

WarehouseEmployee::WarehouseEmployee(std::string name, float salary) : Employee(name, salary) {
    role = "Warehouse";
}
