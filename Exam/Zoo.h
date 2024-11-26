#ifndef ZOO_H
#define ZOO_H

#include <string>
#include <vector>

#include "Animal.h"

using namespace std;

class Zoo {
private:
    string name;
    static int MAX_CAPACITY;
    vector<Animal*> animals;

public:
    Zoo();
    Zoo(const string& _name);
    Zoo(const Zoo& other);

    string getName() const;
    void setName(const string& _name);

    void listAnimals() const;
    void addAnimal(Animal* animal);
    int searchAnimalByName(const string& name);
    void removeAnimalByName(const string& name);
    double averageAgeForType(const string& type) const;
};



#endif //ZOO_H
