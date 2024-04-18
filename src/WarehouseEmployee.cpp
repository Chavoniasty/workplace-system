#include "../lib/WarehouseEmployee.h"

WarehouseEmployee::WarehouseEmployee(std::string name, float salary) : Employee(name, salary) {}

std::string WarehouseEmployee::getRole() const {
    return "Warehouse";
}