#pragma once
#include "Animal.hpp"
#include <iostream>

class   Cat : public Animal {
public:
    Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat& other);
    ~Cat();
    void makeSound() const;
};