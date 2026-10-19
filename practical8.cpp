#include <iostream>
#include <string>
using namespace std;

class BasicInfo {
protected:
    int empId;
    string name;

public:
    void getBasicInfo() {
        cout << "Enter employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, name);
    }
};

class DepartmentInfo {
protected:
    string deptName;
    string designation;

public:
    void getDeptInfo() {
        cout << "Enter department: ";
        getline(cin, deptName);
        cout << "Enter designation: ";
        getline(cin, designation);
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
private:
    double salary;

public:
    void getEmployeeDetails() {
        getBasicInfo();
        getDeptInfo();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() const {
        cout << "\nEmployee Information\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << deptName << endl;
        cout << "Designation : " << designation << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.getEmployeeDetails();
    emp.displayEmployeeDetails();
    return 0;
}
