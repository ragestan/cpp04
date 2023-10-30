#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class   Cat : public Animal {
private:
    Brain* brain;
public:
    Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat& other);
    ~Cat();
    void makeSound() const;
};