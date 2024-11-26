#include "Bird.h"

#include <iostream>

Bird::Bird() :
Animal(), wingspan(0.0) {}

Bird::Bird(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, double _wingspan) :
Animal(_name, _color, _diet, _habitat, _isPet, _age, _weight, _height), wingspan(_wingspan) {}

Bird::Bird(const Bird& other) :
Animal(other), wingspan(other.wingspan) {}

double Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(double _wingspan) {
    wingspan = _wingspan;
}

void Bird::printInfo() const {
    cout << "Animal of type Bird" << endl;
    Animal::printInfo();
    cout << "Wingspan: " << wingspan << " meters" << endl;
}
