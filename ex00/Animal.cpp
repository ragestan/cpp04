#include "Animal.hpp"

Animal::Animal()
{
      std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
     std::cout << "Animal Destructor called" <<std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        std::cout<<"Animal Copy assignment operator called"<<std::endl;
       type = other.type;
    }
    return(*this);
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}

void  Animal::makeSound() const
{
    std::cout<<"Animal sound!!(no specific animal)"<<std::endl;
}

std::string Animal::getType() const
{
    return (type);
}