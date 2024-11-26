#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

#include <string>

using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, const string& _furColor);

    Mammal(const Mammal& other);

    string getFurColor() const;
    void setFurColor(const string& _furColor);

    void printInfo() const override;
};

#endif // MAMMAL_H
