#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

#include <string>

using namespace std;

class Reptile : public Animal {
private:
    string scalePattern;

public:
    Reptile();
    Reptile(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, const string& _scalePattern);
    Reptile(const Reptile& other);

    string getScalePattern() const;
    void setScalePattern(const string& _scalePattern);

    void printInfo() const override;
};

#endif // REPTILE_H
