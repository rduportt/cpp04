#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include "brain.hpp"
#include <iostream>

class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const std::string &t);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const = 0; //Virtuelle PURE
};

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const { std::cout << "Wouf Wouf!" << std::endl;};
};

class Cat : public Animal
{
    private :
        Brain *brain;
    public :
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const { std::cout << "Meow meow!" << std::endl;};
};
class WrongAnimal
{
    protected:
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        ~WrongAnimal();
        void makeSound() const { std::cout << "Generic wrong animal sound" << std::endl; }
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        ~WrongCat();
        void makeSound() const { std::cout << "Wrong meow meow!" << std::endl; }
};
#endif