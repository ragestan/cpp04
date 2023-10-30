#pragma once
#include "Animal.hpp"
#include <iostream>

class Brain{
    private:
    std ::string ideas[100];
    public:
    Brain();
    Brain &operator=(const Brain &other);
    Brain(const Brain& other);
    ~Brain();
};