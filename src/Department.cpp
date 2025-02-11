#include "Department.h"
#include "Professor.h"
#include "Course.h"
#include "Student.h"  // Необходимо для использования student->getName()

Department::Department(const std::string& departmentName)
    : departmentName(departmentName) {}

Department::~Department() {}

void Department::addProfessor(Professor* professor) {
    professors.push_back(professor);
}

void Department::addCourse(Course* course) {
    courses.push_back(course);
}

void Department::displayProfessorsAndCourses() const {
    std::cout << "Department: " << departmentName << std::endl;
    std::cout << "Professors:" << std::endl;
    for (const auto& professor : professors) {
        std::cout << "- " << professor->getName() << std::endl;
        std::cout << "  Assigned Courses:" << std::endl;
        for (const auto& course : professor->getAssignedCourses()) {
            std::cout << "  - " << course->getCourseName() << std::endl;
        }
    }
    std::cout << "Courses:" << std::endl;
    for (const auto& course : courses) {
        std::cout << "- " << course->getCourseName() << std::endl;
        std::cout << "  Enrolled Students:" << std::endl;
        for (const auto& student : course->getEnrolledStudents()) {
            std::cout << "  - " << student->getName() << std::endl;
        }
    }
}
