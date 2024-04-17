#include "../lib/Employee.h"

Employee::Employee(std::string name, float salary) : name(name), salary(salary), role("Employee") {}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float tempSalary) {
    salary = tempSalary;
}

void Employee::setName(std::string tempName) {
    name = tempName;
}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getRole() const {
    return role;
}
