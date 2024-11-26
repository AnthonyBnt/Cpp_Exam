#include "Zoo.h"

#include <iostream>
#include <algorithm>

#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"

int Zoo::MAX_CAPACITY = 100;

Zoo::Zoo() :
name("Unknown") {}

Zoo::Zoo(const string& _name) :
name(_name) {}

Zoo::Zoo(const Zoo& other) :
name(other.name), animals(other.animals) {}

string Zoo::getName() const {
    return name;
}

void Zoo::setName(const string& _name) {
    name = _name;
}

void Zoo::listAnimals() const {
    if (animals.empty()) {
        cout << "No animals in the zoo." << endl;
    } else {
        for (const auto& animal : animals) {
            cout << endl;
            animal->printInfo();
        }
    }
}

void Zoo::addAnimal(Animal* animal) {
    if (animals.size() < MAX_CAPACITY) {
        auto it = lower_bound(animals.begin(), animals.end(), animal, [](const Animal* a, const Animal* b) {
            return a->getName() < b->getName();
        });

        if (it == animals.end() || (*it)->getName() != animal->getName()) {
            animals.insert(it, animal);
        } else {
            cout << "Animal with this name already exists!" << endl;
        }
    } else {
        cout << "Zoo is at capacity!" << endl;
    }
}

int Zoo::searchAnimalByName(const string& name) {
    //Utilisation de la rcherche bianire pour trouver le nom vu que la liste est déja triée par ordre alphabétique

    auto it = lower_bound(animals.begin(), animals.end(), name, [](const Animal* a, const string& name) {
        return a->getName() < name;
    });

    if (it != animals.end() && (*it)->getName() == name) {
        return distance(animals.begin(), it);
    }

    return -1;
}

void Zoo::removeAnimalByName(const string& name) {
    auto it = lower_bound(animals.begin(), animals.end(), name, [](const Animal* a, const string& name) {
        return a->getName() < name;
    });

    if (it != animals.end() && (*it)->getName() == name) {
        delete *it; // Supprime l'objet Animal pour éviter une fuite de mémoire
        animals.erase(it); // Enlève l'animal du vecteur
    }
}

double Zoo::averageAgeForType(const string& type) const {
    int totalAge = 0;
    int count = 0;

    for (const auto& animal : animals) {
        if (type == "Mammal" && dynamic_cast<Mammal*>(animal)) {
            totalAge += animal->getAge();
            count++;
        } else if (type == "Bird" && dynamic_cast<Bird*>(animal)) {
            totalAge += animal->getAge();
            count++;
        } else if (type == "Reptile" && dynamic_cast<Reptile*>(animal)) {
            totalAge += animal->getAge();
            count++;
        }
    }

    if (count == 0) {
        return 0.0;
    }

    return static_cast<double>(totalAge) / count;
}




