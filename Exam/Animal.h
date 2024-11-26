#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    Animal();
    Animal(string name, string color, string diet, string habitat, bool isPet, int age, double weight, double height);
    Animal(const Animal& other);

    string getName() const;
    string getColor() const;
    string getDiet() const;
    string getHabitat() const;
    string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    void setName(const string& name);
    void setColor(const string& color);
    void setDiet(const string& diet);
    void setHabitat(const string& habitat);
    void setSounds(const string& sounds);
    void setIsPet(bool isPet);
    void setAge(int age);
    void setWeight(double weight);
    void setHeight(double height);

    void make_sound() const;
    virtual void printInfo() const;
};

#endif // ANIMAL_H
