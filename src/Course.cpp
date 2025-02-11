#include "Course.h"
#include "Student.h"  // Для доступа к методам Student

Course::Course(const std::string& courseID, const std::string& courseName)
    : courseID(courseID), courseName(courseName) {}

Course::~Course() {}

const std::string& Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(Student* student) {
    enrolledStudents.push_back(student);
}

void Course::displayEnrolledStudents() const {
    std::cout << "Enrolled Students:" << std::endl;
    for (const auto& student : enrolledStudents) {
        std::cout << "- " << student->getName() << std::endl;
    }
}

const std::vector<Student*>& Course::getEnrolledStudents() const {
    return enrolledStudents;
}
