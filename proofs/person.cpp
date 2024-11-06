// Person.cpp
#include "person.hpp"
#include <iostream>

// Constructor
Person::Person(const std::string& name, int age, float feat)
    : name(name), age(age), feat(feat) {}

// Método para mostrar detalles de la persona
void Person::display() const {
    std::cout << "Name: " << name << ", Age: " << age <<  "feat, " << feat << std::endl;
}


int main() {
    // Crear un objeto de la clase Person
    Person person("Alice", 30, 1.83);
    Person persoo("ff", 28, 1.75);
    
    // Usar el método display
    person.display();
    persoo.display();

    return 0;
}