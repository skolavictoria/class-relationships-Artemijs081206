#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <vector>

// Предварительное объявление класса Course
class Course;

class Professor : public Person {
private:
    std::string employeeID;
    // Ассоциация: список курсов, которые ведёт профессор
    std::vector<Course*> assignedCourses;
public:
    Professor(const std::string& name, int age, const std::string& employeeID);
    ~Professor();

    // Назначение курса профессору
    void assignCourse(Course* course);

    // Вывод назначенных курсов
    void displayAssignedCourses() const;

    // Геттер для списка назначенных курсов (используется в Department)
    const std::vector<Course*>& getAssignedCourses() const;
};

#endif // PROFESSOR_H
