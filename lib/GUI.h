#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"

class GUI {
public:
    std::vector<Employee*> employeeList;

    void start();
    void addNewEmployee();
    void changeEmployeeInfo();
    void deleteEmployee();
    void getAllSalaries();
    void displayAllEmployees();
    void clearScreen();
    void waitForUser();
};

#endif // PROGRAM_H
