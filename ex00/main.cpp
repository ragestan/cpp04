#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test()
{
    const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
        delete meta;
        delete i;
        delete j;
        return;
}

void test3()
{
    WrongAnimal* meta = new WrongAnimal();
        WrongAnimal* i = new WrongCat();
        std::cout << meta->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        meta->makeSound();
        delete meta;
        delete i;
}


int main()
{
{
    test();
    }
    std::cout<<"------------wrong animal part-------------"<<std::endl;
    {
        test3();
    }
    //system("leaks Polymorphism ");
}