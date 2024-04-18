#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
   protected:
    std::string name;
    float salary;

   public:
    Employee(std::string name, float salary = 0.0);
    virtual ~Employee() {}

    float getSalary() const;
    void setSalary(float tempSalary);
    void setName(std::string tempName);
    std::string getName() const;
    virtual std::string getRole() const = 0;
};

#endif  // EMPLOYEE_H
