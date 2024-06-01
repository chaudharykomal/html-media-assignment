#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
class Employee {
private:
std::string name;
int employeeID;
double salary;
public:
// Constructor
Employee(const std::string& n, int id, double sal) {
name = n;
employeeID = id;
salary = sal;
}
// Display function
void display() const {
std::cout << "Name: " << name << ", Employee ID: " <<
employeeID << ", Salary: $" << salary << std::endl;
}
// Getter methods
double getSalary() const {
return salary;
}
};
// Function to calculate the average salary of all employees
double averageWage(const std::vector<Employee>& employees) {
double totalSalary = 0;
for (const auto& emp : employees) {
totalSalary += emp.getSalary();
}
return totalSalary / employees.size();
}
// Function to find the employee with the maximum salary
Employee maxSalary(const std::vector<Employee>& employees) {
auto maxSalaryEmployee = std::max_element(employees.begin(),
employees.end(),
[](const Employee& emp1, const Employee& emp2) {
return emp1.getSalary() < emp2.getSalary();
});
return *maxSalaryEmployee;
}
int main() {
// Create 5 Employee objects
std::vector<Employee> employees = {
{"John", 101, 50000},
{"Alice", 102, 60000},
{"Bob", 103, 55000},
{"Emily", 104, 62000},
{"David", 105, 58000}
};
// Display characteristics of each employee
std::cout << "Details of all employees:\n";
for (const auto& emp : employees) {
emp.display();
}
// Calculate and display average salary
std::cout << "Average salary of all employees: $" <<
averageWage(employees) << std::endl;
// Find and display employee with maximum salary
std::cout << "Employee with maximum salary:\n";
maxSalary(employees).display();
return 0;
}