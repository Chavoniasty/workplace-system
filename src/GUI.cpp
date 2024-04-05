#include "../lib/GUI.h"
#include "../lib/EmployeeFactory.h"
#include <climits>

void GUI::start(){
    bool menuLoop = true;
    while(menuLoop){
        clearScreen();
        std::cout << "==== MENU ====" << std::endl
                  << "1. Add new employee" << std::endl
                  << "2. Change employee name/salary" << std::endl
                  << "3. Delete employee from system" << std::endl
                  << "4. See all employees" << std::endl
                  << "5. Get sum of every employee salary" << std::endl
                  << "6. Exit" << std::endl;
        int menuChoice;
        std::cin >> menuChoice;
        switch (menuChoice) {
            case 1:
                addNewEmployee();
                break;

            case 2:
                changeEmployeeInfo();
                break;

            case 3:
                deleteEmployee();
                break;

            case 4:
                displayAllEmployees();
                waitForUser();
                break;

            case 5:
                getAllSalaries();
                waitForUser();
                break;
            case 6:
                menuLoop = false;
                break;

            default:
                start();
                break;
        }
    }
}

void GUI::addNewEmployee() {
    clearScreen();
    std::string tempName;
    std::cout << "Insert employee name: ";
    std::cin >> tempName;

    float tempSalary;
    std::cout << "Insert employee salary (0 - default value for role):  ";
    std::cin >> tempSalary;

    int roleInt;
    std::string tempRole;
    do {
        std::cout << "Choose employee role: 1 - Warehouse, 2 - Office, 0 - Return to menu" << std::endl;
        std::cin >> roleInt;
        if (roleInt == 1) {
            tempRole = "warehouse";
        }
        else if (roleInt == 2) {
            tempRole = "office";
        }
        else if (roleInt == 0) {
            return;
        }
    } while (roleInt > 3 || roleInt < 0);
    employeeList.push_back(EmployeeFactory(tempRole, tempName, tempSalary));
}

void GUI::changeEmployeeInfo() {
    clearScreen();
    std::cout << "Select employee:" << std::endl;
    displayAllEmployees();
    int choice;
    std::cin >> choice;
    choice--;
    std::cout << "Change: 1 - Name, 2 - Salary" << std::endl;
    int choice2;
    std::cin >> choice2;
    if (choice2 == 1) {
        std::string tempName;
        std::cout << "Enter new name:   ";
        std::cin >> tempName;
        employeeList.at(choice)->setName(tempName);
    }
    else if (choice2 == 2) {
        float tempSalary;
        std::cout << "Enter new salary: ";
        std::cin >> tempSalary;
        employeeList.at(choice)->setSalary(tempSalary);
    }
}

void GUI::deleteEmployee(){
    displayAllEmployees();
    int choice;
    std::cin >> choice;
    choice--;
    employeeList.erase(employeeList.begin() + choice);
}

void GUI::getAllSalaries() {
    clearScreen();
    float sum = 0;
    for (auto& elem: employeeList) {
        sum += elem->getSalary();
    }
    std::cout << "Salaries combined value:  " << sum << std::endl;
}

void GUI::displayAllEmployees() {
    clearScreen();
    int i = 1;
    if(employeeList.empty()){
        std::cout << "No employees.";
    }
    for (auto& elem: employeeList) {
        std::cout << i << ". " << elem->getName() << "  " << elem->getSalary() << " " << elem->getRole() << std::endl;
        i++;
    }
}

void GUI::clearScreen() {
    #ifdef WINDOWS
        std::system("cls");
    #else
        std::system ("clear");
    #endif
}

void GUI::waitForUser() {
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    std::cout << "Press any key to continue . . .\n";
    std::cin.get();
}