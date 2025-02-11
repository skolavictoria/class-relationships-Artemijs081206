#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <iostream>

// Предварительное объявление класса Student
class Student;

class Course {
private:
    std::string courseID;
    std::string courseName;
    // Композиция: список записанных студентов
    std::vector<Student*> enrolledStudents;
public:
    Course(const std::string& courseID, const std::string& courseName);
    ~Course();

    // Геттер для имени курса
    const std::string& getCourseName() const;

    // Добавление студента в курс
    void addStudent(Student* student);

    // Вывод списка студентов
    void displayEnrolledStudents() const;

    // Геттер для списка студентов (используется в Department)
    const std::vector<Student*>& getEnrolledStudents() const;
};

#endif // COURSE_H
