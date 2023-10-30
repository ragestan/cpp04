#pragma once
#include "Animal.hpp"
#include <iostream>

class   Dog : public Animal {
public:
    Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog& other);
    ~Dog();
    void makeSound() const;
};