#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"

using namespace std;

int main() {
    // 1. Création des animaux
    cout << "==============================" << endl;
    cout << "    Création des animaux      " << endl;
    cout << "==============================" << endl;

    Animal* lion = new Mammal("Lion", "Yellow", "Carnivore", "Savannah", true, 5, 190.5, 1.2, "Golden");
    Animal* eagle = new Bird("Eagle", "Brown", "Carnivore", "Mountains", true, 3, 6.0, 0.9, 2.5);
    Animal* snake = new Reptile("Snake", "Green", "Carnivore", "Desert", true, 4, 10.0, 1.5, "Scales");

    cout << "Animaux crées avec succès" << endl;

    // 2. Création du zoo
    cout << "\n==============================" << endl;
    cout << "      Création du zoo        " << endl;
    cout << "==============================" << endl;
    Zoo zoo("Wild Park");

    cout << "Zoo crée avec succès" << endl;

    // 3. Ajouter des animaux au zoo
    cout << "\n==============================" << endl;
    cout << "   Ajout des animaux au zoo  " << endl;
    cout << "==============================" << endl;
    zoo.addAnimal(lion);
    zoo.addAnimal(eagle);
    zoo.addAnimal(snake);

    cout << "Animaux ajoutés au zoo avec succès" << endl;

    // 4. Lister les animaux du zoo
    cout << "\n==============================" << endl;
    cout << "  Liste des animaux dans le zoo " << endl;
    cout << "==============================" << endl;
    zoo.listAnimals();

    // 5. Calculer et afficher l'âge moyen des différents types d'animaux
    cout << "\n==============================" << endl;
    cout << "  Age moyen des animaux par type " << endl;
    cout << "==============================" << endl;
    cout << "Age moyen des Mammals : " << zoo.averageAgeForType("Mammal") << endl;
    cout << "Age moyen des Birds : " << zoo.averageAgeForType("Bird") << endl;
    cout << "Age moyen des Reptiles : " << zoo.averageAgeForType("Reptile") << endl;

    // 6. Tester la fonction removeAnimalByName pour supprimer un animal
    cout << "\n==============================" << endl;
    cout << "  Suppression d'un animal    " << endl;
    cout << "==============================" << endl;
    cout << "Suppression de l'animal 'Eagle' du zoo." << endl;
    zoo.removeAnimalByName("Eagle");
    zoo.listAnimals();

    // 7. Test de recherche d'animal par nom
    cout << "\n==============================" << endl;
    cout << "  Recherche d'un animal par nom " << endl;
    cout << "==============================" << endl;
    int index = zoo.searchAnimalByName("Lion");
    if (index != -1) {
        cout << "Lion trouvé à l'indice : " << index << endl;
    } else {
        cout << "Lion non trouvé." << endl;
    }

    // 8. Test de suppression d'un animal avec un nom inexistant
    cout << "\n==============================" << endl;
    cout << "  Test de suppression d'un animal inexistant " << endl;
    cout << "==============================" << endl;
    zoo.removeAnimalByName("Tiger"); // Cela ne fera rien
    zoo.listAnimals();

    // 9. Nettoyage de la mémoire
    cout << "\n==============================" << endl;
    cout << "    Nettoyage de la mémoire   " << endl;
    cout << "==============================" << endl;
    delete snake;
    delete lion;
    cout << "Mémoire néttoyée" << endl;

    return 0;
}
