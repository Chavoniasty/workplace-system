#include "../lib/EmployeeFactory.h"

#include "../lib/OfficeEmployee.h"
#include "../lib/WarehouseEmployee.h"

Employee* EmployeeFactory(std::string role, std::string name, float salary) {
    if (role == "warehouse") {
        if (salary == 0) {
            return new WarehouseEmployee(name);
        } else {
            return new WarehouseEmployee(name, salary);
        }
    } else if (role == "office") {
        if (salary == 0) {
            return new OfficeEmployee(name);
        } else {
            return new OfficeEmployee(name, salary);
        }
    }
    return nullptr;
}