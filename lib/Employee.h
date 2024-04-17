#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    float salary;
    std::string role;

public:
    Employee(std::string name, float salary = 0);
    virtual ~Employee() {}

    virtual float getSalary() const = 0;
    virtual void setSalary(float tempSalary) = 0;
    virtual void setName(std::string tempName) = 0;
    virtual std::string getName() const = 0;
    virtual std::string getRole() const = 0;
};

#endif // EMPLOYEE_H
