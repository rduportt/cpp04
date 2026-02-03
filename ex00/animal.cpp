#include "animal.hpp"

Animal::Animal()
{
    type = "RandomAnimal";
    std::cout << "Creating a new Animal" << std::endl;
}

Animal::Animal(const std::string &t)
{
    type = t;
    std::cout << "Creating a new Animal (param)" << std::endl;
}

Animal::Animal(const Animal &other)
{
    type = other.type;
    std::cout << "Copying an Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Assigning an Animal" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destroying an Animal" << std::endl;
}

Cat::Cat()
{
    type = "Cat";
    std::cout << "Creating a Cat" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copying a Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Assigning a Cat" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destroying a Cat" << std::endl;
}

Dog::Dog()
{
    type = "Dog";
    std::cout << "Creating a Dog" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copying a Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Assigning a Dog" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destroying a Dog" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    type = "RandomWrongAnimal";
    std::cout << "Creating a new Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    type = other.type;
    std::cout << "Copying a WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Assigning a WrongAnimal" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destroying a Wrong Animal" << std::endl;
}

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Creating a Wrong Cat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destroying a Wrong Cat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Copying a WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "Assigning a WrongCat" << std::endl;
    return *this;
}