#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string department;
    static int employeeCount;

public:
    // Constructor with user input
    Employee() {
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cin.ignore(); // Clear the buffer
        cout << "Enter employee department: ";
        getline(cin, department);
        employeeCount++;
    }

    void displayEmployeeDetails() const {
        cout << "Name: " << name << ", ID: " << id << ", Department: " << department << endl;
    }

    static int getEmployeeCount() {
        return employeeCount;
    }
};

// Initialize static member variable
int Employee::employeeCount = 0;

int main() {
    int numOfEmployees;
    cout << "How many employees do you want to enter? ";
    cin >> numOfEmployees;

    Employee* employees = new Employee[numOfEmployees];

    for (int i = 0; i < numOfEmployees; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        employees[i].displayEmployeeDetails();
    }

    cout << "\nTotal number of employees: " << Employee::getEmployeeCount() << endl;

    delete[] employees; // Free allocated memory
    return 0;
}

