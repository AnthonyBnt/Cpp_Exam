#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

#include <string>

using namespace std;

class Bird : public Animal {
private:
    double wingspan;

public:
    Bird();
    Bird(const string& _name, const string& _color, const string& _diet, const string& _habitat, bool _isPet, int _age, double _weight, double _height, double _wingspan);
    Bird(const Bird& other);

    double getWingspan() const;
    void setWingspan(double _wingspan);

    void printInfo() const override;
};

#endif // BIRD_H
