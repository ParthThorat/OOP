#include <iostream>
#include <string>
using namespace std;

class BasicInfo {
protected:
    string name;
    string address;
    int age;

public:
    void getBasicInfo() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayBasicInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Address: " << address << "\n";
        cout << "Age: " << age << "\n";
    }
};

// Base Class 2: Department Information
class DepartmentInfo {
protected:
    string deptName;
    string natureOfWork;

public:
    void getDeptInfo() {
        cout << "Enter Department Name: ";
        getline(cin >> ws, deptName);
        cout << "Enter Nature of Work: ";
        getline(cin, natureOfWork);
    }

    void displayDeptInfo() const {
        cout << "Department: " << deptName << "\n";
        cout << "Nature of Work: " << natureOfWork << "\n";
    }
};

// Derived Class: Employee inheriting from both base classes
class Employee : public BasicInfo, public DepartmentInfo {
private:
    int empId;
    double salary;

public:
    void getEmployeeDetails() {
        cout << "--- Personal Details ---\n";
        getBasicInfo();

        cout << "\n--- Department Details ---\n";
        getDeptInfo();

        cout << "\nEmployee Details\n";
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Salary: $";
        cin >> salary;
    }

    void displayEmployeeDetails() const {
        cout << "\nEMPLOYEE RECORD\n";
        displayBasicInfo();
        displayDeptInfo();
        cout << "Employee ID: " << empId << "\n";
        cout << "Salary: $" << salary << "\n";
        cout << "\n";
    }
};
int main() {
    int Number = 4;
    Employee emp[4];
    for (int i = 0; i < Number; i++) {
        cout << "\n================ ENTER DETAILS FOR EMPLOYEE " << (i + 1) << " ================\n";
    emp[i].getEmployeeDetails();
    emp[i].displayEmployeeDetails();}
    return 0;
}
