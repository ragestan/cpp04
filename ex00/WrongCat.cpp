#include "WrongCat.hpp"

WrongCat::WrongCat()
{
      std::cout << "WrongCat Default constructor called" << std::endl;
      type = "WrongCat";
}

WrongCat::~WrongCat()
{
     std::cout << "WrongCat Destructor called" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        std::cout<<"WrongCat Copy assignment operator called"<<std::endl;
       type = other.type;
    }
    return(*this);
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = other;
}

void WrongCat::makeSound() const
{
    std::cout  << "Meao Meao!" << std::endl;
}