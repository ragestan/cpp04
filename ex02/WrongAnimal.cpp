#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
      std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal Destructor called" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {
        std::cout<<"WrongAnimal Copy assignment operator called"<<std::endl;
       type = other.type;
    }
    return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other;
}

void  WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal sound!!(no specific WrongAnimal)"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}