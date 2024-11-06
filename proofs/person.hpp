// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;
    float feat;

public:
    // Constructor
    Person(const std::string& name, int age, float feat);

    // Métodos
    void display() const;
};

#endif // PERSON_H
