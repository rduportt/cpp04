#include "animal.hpp"
#include "brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const std::string &init) {
    for (int i = 0; i < 100; ++i)
        ideas[i] = init;
    std::cout << "Brain parameterized constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other)
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    std::cout << "Brain assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

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
    brain = new Brain();
    std::cout << "Creating a Cat" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copying a Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Assigning a Cat" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destroying a Cat" << std::endl;
}

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Creating a Dog" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copying a Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Assigning a Dog" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destroying a Dog" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    type = "RandomWrongAnimal";
    std::cout << "Creating a new Wrong Animal" << std::endl;
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