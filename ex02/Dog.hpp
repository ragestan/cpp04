#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class   Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog& other);
    ~Dog();
    void makeSound() const;
};