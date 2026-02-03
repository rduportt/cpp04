#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public : 
        Brain();
        Brain(const std::string &init);
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();
};

#endif