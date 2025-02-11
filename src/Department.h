#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>
#include <iostream>

// Предварительные объявления классов Professor и Course
class Professor;
class Course;

class Department {
private:
    std::string departmentName;
    // Агрегация: департамент агрегирует профессоров и курсы
    std::vector<Professor*> professors;
    std::vector<Course*> courses;
public:
    Department(const std::string& departmentName);
    ~Department();

    void addProfessor(Professor* professor);
    void addCourse(Course* course);

    // Вывод информации о профессорах и курсах с нужными отступами
    void displayProfessorsAndCourses() const;
};

#endif // DEPARTMENT_H
