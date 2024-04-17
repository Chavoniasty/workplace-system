#include "../lib/WarehouseEmployee.h"

WarehouseEmployee::WarehouseEmployee(std::string name, float salary) : Employee(name, salary) {
    role = "Warehouse";
}


float WarehouseEmployee::getSalary() const {
    return salary;
}

void WarehouseEmployee::setSalary(float tempSalary) {
    salary = tempSalary;
}

void WarehouseEmployee::setName(std::string tempName) {
    name = tempName;
}

std::string WarehouseEmployee::getName() const {
    return name;
}

std::string WarehouseEmployee::getRole() const {
    return role;
}