#ifndef EMPLOYEEFACTORY_H
#define EMPLOYEEFACTORY_H

#include <string>
#include "Employee.h"

Employee* EmployeeFactory(std::string role, std::string name, float salary);

#endif // EMPLOYEEFACTORY_H
