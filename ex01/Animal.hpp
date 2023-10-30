#pragma once
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal &operator=(const Animal &other);
        Animal(const Animal& other);
        virtual ~Animal();
        //void  makeSound() const;
        virtual void  makeSound() const;
        std::string getType() const;
};