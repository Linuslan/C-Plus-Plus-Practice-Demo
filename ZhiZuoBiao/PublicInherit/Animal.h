#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
#include <string>
using namespace std;
namespace linuslan{
    class Animal{
        private:
            int age;
            string location;
        protected:
            int food;
            int getFood() const;
            void setFood(int food);
        public:
            Animal(int age, string location, int food);
            ~Animal();
            void setAge(int age);
            int getAge() const;
    };

    class Cat : public Animal{
        private:
            int color;
        public:
            Cat(int age, int color, string location, int food);
            ~Cat();
            void setColor(int color);
            int getColor() const;
            void setCatFood(int food);
    };
    class Dog : public Animal {
        private:
            int weight;
        public:
            Dog(int age, int weight, string location, int food);
            ~Dog();
            void setWeight(int weight);
            int getWeight() const;
    };
}
#endif // _ANIMAL_H_
