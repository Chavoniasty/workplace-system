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

    virtual float getSalary() const;
    virtual void setSalary(float tempSalary);
    void setName(std::string tempName);
    virtual std::string getName() const;
    virtual std::string getRole() const;
};

#endif // EMPLOYEE_H
