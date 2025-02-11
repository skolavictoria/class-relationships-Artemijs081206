#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

// Предварительное объявление класса Course
class Course;

class Student : public Person {
private:
    std::string studentID;
    // Ассоциация: список курсов, на которые записан студент
    std::vector<Course*> enrolledCourses;
public:
    Student(const std::string& name, int age, const std::string& studentID);
    ~Student();

    // Запись на курс
    void enrollCourse(Course* course);

    // Вывод списка курсов
    void displayCourses() const;
};

#endif // STUDENT_H
