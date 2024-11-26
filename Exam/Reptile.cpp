#include "Reptile.h"
#include <iostream>

using namespace std;

Reptile::Reptile() :
Animal(), scalePattern("Unknown") {}

Reptile::Reptile(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, const string& _scalePattern) :
Animal(_name, _color, _diet, _habitat, _isPet, _age, _weight, _height), scalePattern(_scalePattern) {}

Reptile::Reptile(const Reptile& other) :
Animal(other), scalePattern(other.scalePattern) {}

string Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::setScalePattern(const string& _scalePattern) {
    scalePattern = _scalePattern;
}

void Reptile::printInfo() const {
    cout << "Animal of type Reptile" << endl;
    Animal::printInfo();
    cout << "Scale Pattern: " << scalePattern << endl;
}
