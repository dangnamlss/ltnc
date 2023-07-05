#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee
{
    string name;
    string code;
    int workingDate;
    int level;
};

void printHighestSalaryEmployeeName(const vector<Employee>& employees)
{
    int maxSalary = 0;

    for (const Employee& employee : employees)
    {
        int salary = employee.workingDate * employee.level * 1.05;
        if (salary > maxSalary)
        {
            maxSalary = salary;
        }
    }

    for (const Employee& employee : employees)
    {
        int salary = employee.workingDate * employee.level * 1.05;
        if (salary == maxSalary)
        {
            cout << employee.name << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Employee> employees;

    for (int i = 0; i < n; i++)
    {
        Employee employee;
        cin >> employee.code;
        cin.ignore();
        getline(cin, employee.name, ',');
        cin >> employee.workingDate;
        cin.ignore();
        cin >> employee.level;

        employees.push_back(employee);
    }

    printHighestSalaryEmployeeName(employees);

    return 0;
}