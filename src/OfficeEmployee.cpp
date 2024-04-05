#include "../lib/OfficeEmployee.h"

OfficeEmployee::OfficeEmployee(std::string name, float salary) : Employee(name, salary) {
    role = "Office";
}

