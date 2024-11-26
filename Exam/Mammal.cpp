#include "Mammal.h"

#include <iostream>

Mammal::Mammal() :
Animal(), furColor("Unknown") {}

Mammal::Mammal(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, const string& _furColor) :
Animal(_name, _color, _diet, _habitat, _isPet, _age, _weight, _height), furColor(_furColor) {}

Mammal::Mammal(const Mammal& other) :
Animal(other), furColor(other.furColor) {}

string Mammal::getFurColor() const {
    return furColor;
}

void Mammal::setFurColor(const string& _furColor) {
    furColor = _furColor;
}

void Mammal::printInfo() const {
    cout << "Animal of type Mammal" << endl;
    Animal::printInfo();
    cout << "Fur Color: " << furColor << endl;
}
