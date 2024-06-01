#include <iostream>
#include <string>
class Student {
private:
int rollNumber;
std::string name;
std::string department;
std::string course;
int yearOfJoining;
public:
// Constructor
Student(int roll, const std::string& n, const std::string&
dept, const std::string& crs, int year) {
rollNumber = roll;
name = n;
department = dept;
course = crs;
yearOfJoining = year;
}
// Getter methods
int getRollNumber() const {
return rollNumber;
}
std::string getName() const {
return name;
}
std::string getDepartment() const {
return department;
}
std::string getCourse() const {
return course;
}
int getYearOfJoining() const {
return yearOfJoining;
}
// Member function to check if two students have the same
//department
bool sameDepartment(const Student& other) const {
return department == other.department;
}
};
int main() {
// Create two Student objects
Student student1(1, "Alice", "Computer Science", "B.Tech",
2022);
Student student2(2, "Bob", "Electrical Engineering",
"B.Tech", 2023);
// Check if the students have the same department
if (student1.sameDepartment(student2)) {
std::cout << "Both students are in the same department.\n";

} else {
std::cout << "Students are in different departments.\n";
}
return 0;
}