#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age);
    virtual ~Person();

    // Вывод информации – только возраст
    virtual void displayInfo() const;
    
    const std::string& getName() const;
};

#endif // PERSON_H
