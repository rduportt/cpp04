#include "animal.hpp"

int main()
{
    std::cout << "=== Test 1: Objets correctement implémentés ===" << std::endl;
    Animal animal;
    Cat cat;
    Dog dog;

    animal.makeSound();
    cat.makeSound();
    dog.makeSound();

    std::cout << "\n=== Test 2: Via pointeurs (Animal) ===" << std::endl;
    Animal* animal_ptr = new Animal();
    Animal* cat_ptr = new Cat();
    Animal* dog_ptr = new Dog();

    animal_ptr->makeSound();
    cat_ptr->makeSound();    // Affiche "Meow meow!" grâce à virtual
    dog_ptr->makeSound();    // Affiche "Wouf Wouf!" grâce à virtual

    delete animal_ptr;
    delete cat_ptr;
    delete dog_ptr;

    std::cout << "\n=== Test 3: Objets WRONG (sans virtual) ===" << std::endl;
    WrongAnimal wrong_animal;
    WrongCat wrong_cat;

    wrong_animal.makeSound();
    wrong_cat.makeSound();

    std::cout << "\n=== Test 4: Via pointeurs (WrongAnimal) ===" << std::endl;
    WrongAnimal* wrong_animal_ptr = new WrongAnimal();
    WrongAnimal* wrong_cat_ptr = new WrongCat();

    std::cout << std::endl;
    wrong_animal_ptr->makeSound();
    wrong_cat_ptr->makeSound();  // Affiche "Generic wrong animal sound" car PAS virtual !
    std::cout << std::endl;
    
    delete wrong_animal_ptr;
    delete wrong_cat_ptr;

    return 0;
}