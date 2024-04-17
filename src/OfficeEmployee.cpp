#include "../lib/OfficeEmployee.h"

OfficeEmployee::OfficeEmployee(std::string name, float salary) : Employee(name, salary) {
    role = "Office";
}


float OfficeEmployee::getSalary() const {
    return salary;
}

void OfficeEmployee::setSalary(float tempSalary) {
    salary = tempSalary;
}

void OfficeEmployee::setName(std::string tempName) {
    name = tempName;
}

std::string OfficeEmployee::getName() const {
    return name;
}

std::string OfficeEmployee::getRole() const {
    return role;
}