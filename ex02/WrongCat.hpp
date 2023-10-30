#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class   WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat &operator=(const WrongCat &other);
    WrongCat(const WrongCat& other);
    ~WrongCat();
    void makeSound() const;
};