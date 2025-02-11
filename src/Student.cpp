#include "Student.h"
#include "Course.h"  // Для доступа к методам Course

Student::Student(const std::string& name, int age, const std::string& studentID)
    : Person(name, age), studentID(studentID) {}

Student::~Student() {}

void Student::enrollCourse(Course* course) {
    enrolledCourses.push_back(course);
}

void Student::displayCourses() const {
    std::cout << "Enrolled Courses:" << std::endl;
    for (const auto& course : enrolledCourses) {
        std::cout << "- " << course->getCourseName() << std::endl;
    }
}
