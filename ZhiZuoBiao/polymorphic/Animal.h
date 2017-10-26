#ifndef _ANIMAL_H_
#define _ANIMAL_H_
class Animal {
    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const = 0;
};

class Cat: public Animal {
    public:
        Cat();
        ~Cat();
        void makeSound() const;
};

class Dog: public Animal {
    public:
        Dog();
        ~Dog();
        void makeSound() const;
};
#endif // _ANIMAL_H_
