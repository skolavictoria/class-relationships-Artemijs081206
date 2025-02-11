#include "Professor.h"
#include "Course.h"  // Для доступа к методам Course

Professor::Professor(const std::string& name, int age, const std::string& employeeID)
    : Person(name, age), employeeID(employeeID) {}

Professor::~Professor() {}

void Professor::assignCourse(Course* course) {
    assignedCourses.push_back(course);
}

void Professor::displayAssignedCourses() const {
    std::cout << "Assigned Courses:" << std::endl;
    for (const auto& course : assignedCourses) {
        std::cout << "- " << course->getCourseName() << std::endl;
    }
}

const std::vector<Course*>& Professor::getAssignedCourses() const {
    return assignedCourses;
}
