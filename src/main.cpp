#include <iostream>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
#include "Department.h"

int main() {
    // Создаем студентов
    Student* student1 = new Student("John Doe", 20, "S001");
    Student* student2 = new Student("Jane Doe", 19, "S002");

    // Создаем профессора
    Professor* professor1 = new Professor("Dr. Smith", 45, "P001");

    // Создаем курсы
    Course* course1 = new Course("C101", "Math 101");
    Course* course2 = new Course("C102", "Physics 101");
    Course* course3 = new Course("C103", "Chemistry 101");

    // Студент John Doe записывается на курсы Math 101 и Physics 101
    student1->enrollCourse(course1);
    student1->enrollCourse(course2);

    // В курс Math 101 добавляем John Doe, а в курс Physics 101 – Jane Doe
    course1->addStudent(student1);
    course2->addStudent(student2);

    // Профессору Dr. Smith назначаются курсы Math 101 и Chemistry 101
    professor1->assignCourse(course1);
    professor1->assignCourse(course3);

    // Создаем департамент и добавляем в него профессора и курсы (Chemistry 101 не добавляем в департамент)
    Department* dept = new Department("Science Department");
    dept->addProfessor(professor1);
    dept->addCourse(course1);
    dept->addCourse(course2);

    // Вывод информации о студенте (John Doe)
    std::cout << "Student: " << student1->getName() << std::endl;
    student1->displayInfo();
    student1->displayCourses();
    std::cout << std::endl;

    // Вывод информации о профессоре (Dr. Smith)
    std::cout << "Professor: " << professor1->getName() << std::endl;
    professor1->displayInfo();
    professor1->displayAssignedCourses();
    std::cout << std::endl;

    // Вывод информации о департаменте
    dept->displayProfessorsAndCourses();

    // Очистка памяти
    delete student1;
    delete student2;
    delete professor1;
    delete course1;
    delete course2;
    delete course3;
    delete dept;

    return 0;
}
