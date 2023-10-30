#pragma once
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &other);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();
        //void  makeSound() const;
        void  makeSound() const;
        std::string getType() const;
};