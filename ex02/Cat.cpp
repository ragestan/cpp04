#include "Cat.hpp"

Cat::Cat()
{
      std::cout << "Cat Default constructor called" << std::endl;
      type = "Cat";
      brain = new Brain();
}

Cat::~Cat()
{
     std::cout << "Cat Destructor called" <<std::endl;
     delete brain;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        std::cout<<"Cat Copy assignment operator called"<<std::endl;
       type = other.type;
       brain = new Brain(*other.brain);
    }
    return(*this);
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

void Cat::makeSound() const
{
    std::cout  << "Meao Meao!" << std::endl;
}