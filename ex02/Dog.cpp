#include "Dog.hpp"

Dog::Dog()
{
      std::cout << "Dog Default constructor called" << std::endl;
      type = "Dog";
      brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" <<std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        std::cout<<"Dog Copy assignment operator called"<<std::endl;
       type = other.type;
       brain = new Brain(*other.brain);
    }
    return(*this);
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

void Dog::makeSound() const
{
    std::cout  << "Woof Woof!" << std::endl;
}