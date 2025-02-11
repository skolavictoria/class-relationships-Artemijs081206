#include "Person.h"

Person::Person(const std::string& name, int age) : name(name), age(age) {}

Person::~Person() {}

void Person::displayInfo() const {
    std::cout << "Age: " << age << std::endl;
}

const std::string& Person::getName() const {
    return name;
}
