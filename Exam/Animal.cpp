#include "Animal.h"

#include <iostream>

Animal::Animal() :
name(""), color(""), diet(""), habitat(""), sounds(""), isPet(false), age(0), weight(0.0), height(0.0) {}

Animal::Animal(string _name, string _color, string _diet, string _habitat, bool _isPet, int _age, double _weight, double _height) :
name(_name), color(_color), diet(_diet), habitat(_habitat), sounds(""), isPet(_isPet), age(_age), weight(_weight), height(_height) {}

Animal::Animal(const Animal& other) :
name(other.name), color(other.color), diet(other.diet), habitat(other.habitat), sounds(other.sounds),
isPet(other.isPet), age(other.age), weight(other.weight), height(other.height) {}

string Animal::getName() const {
    return name;
}

string Animal::getColor() const {
    return color;
}

string Animal::getDiet() const {
    return diet;
}

string Animal::getHabitat() const {
    return habitat;
}

string Animal::getSounds() const {
    return sounds;
}

bool Animal::getIsPet() const {
    return isPet;
}

int Animal::getAge() const {
    return age;
}

double Animal::getWeight() const {
    return weight;
}

double Animal::getHeight() const {
    return height;
}

void Animal::setName(const string& _name) {
    name = _name;
}

void Animal::setColor(const string& _color) {
    color = _color;
}

void Animal::setDiet(const string& _diet) {
    diet = _diet;
}

void Animal::setHabitat(const string& _habitat) {
    habitat = _habitat;
}

void Animal::setSounds(const string& _sounds) {
    sounds = _sounds;
}

void Animal::setIsPet(bool _isPet) {
    isPet = _isPet;
}

void Animal::setAge(int _age) {
    age = _age;
}

void Animal::setWeight(double _weight) {
    weight = _weight;
}

void Animal::setHeight(double _height) {
    height = _height;
}


void Animal::make_sound() const {
    cout << name << " makes this sound: " << sounds << endl;
}

void Animal::printInfo() const {
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Sound: " << sounds << endl;
    cout << "Is Pet: " << (isPet ? "Yes" : "No") << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " meters" << endl;
}
